#include <stdio.h>      // For standard input/output functions
#include <stdlib.h>     // For exit(), NULL, setenv()
#include <unistd.h>     // For fork(), execve(), getpid() --- to get rid of implicit declaration warning
#include <sys/types.h>  // For data types used in system calls (e.g., pid_t)
#include <sys/wait.h>   // For wait() and related macros

// Using the setenv()

void pwncollege()
{
    extern char **environ;
    char *argv[] = {"/challenge/embryoio_level32", NULL};
    setenv("mrsqev", "oaxcmkzbmf", 1);
    execve("/challenge/embryoio_level32", argv, environ);
    exit(0);
}

int main (int argc, char argv[])
{
    pid_t cpid;

    if (fork() == 0)
    {
        pwncollege();
    }
    else
    {
        cpid = wait(NULL);
    }

    return 0;
}