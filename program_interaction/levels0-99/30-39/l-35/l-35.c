#include <stdio.h>      // For standard input/output functions
#include <stdlib.h>     // For exit(), NULL, setenv()
#include <unistd.h>     // For fork(), execve(), getpid() --- to get rid of implicit declaration warning
#include <sys/types.h>  // For data types used in system calls (e.g., pid_t)
#include <sys/wait.h>   // For wait() and related macros
#include <fcntl.h>      // For file control options (e.g., open(), O_RDONLY)

void pwncollege()
{
    // extern char **environ;
    // environ = NULL;
    char *argv[] = {"/challenge/run", NULL};
    // execve("/challenge/run", argv, environ);
    execve("/challenge/run", argv, NULL);
    exit(0);
}

int main(int argc, char argv[])
{
    pid_t cpid;

    if (!fork())
    {
        pwncollege();
    }
    else
    {
        cpid = wait(NULL);
    }

    return 0;
}