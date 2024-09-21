#include <stdio.h>      // For standard input/output functions
#include <stdlib.h>     // For exit(), NULL, setenv()
#include <unistd.h>     // For fork(), execve(), getpid() --- to get rid of implicit declaration warning
#include <sys/types.h>  // For data types used in system calls (e.g., pid_t)
#include <sys/wait.h>   // For wait() and related macros
#include <fcntl.h>      // For file control options (e.g., open(), O_RDONLY)

void pwncollege()
{
    int fd_out = open("/tmp/fhyqsa", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd_out < 0)
    {
        perror("File open error for writing...");
        exit(1);
    }

    // Redirect stdin to the file
    if (dup2(fd_out, STDOUT_FILENO) < 0)
    {
        perror("dup2 error...");
        exit(1);
    }
    close(fd_out); // Close the file descriptor since it's now duplicated

    // Prepare to execute the challenge program
    char *argv[] = {"/challenge/embryoio_level34", NULL};
    execve("/challenge/embryoio_level34", argv, NULL);

    // If execve fails, print an error and exit
    perror("execve failed");
    exit(1);
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