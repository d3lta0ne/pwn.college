#include <stdio.h>      // For standard input/output functions
#include <stdlib.h>     // For exit(), NULL, setenv()
#include <unistd.h>     // For fork(), execve(), getpid() --- to get rid of implicit declaration warning
#include <sys/types.h>  // For data types used in system calls (e.g., pid_t)
#include <sys/wait.h>   // For wait() and related macros
#include <fcntl.h>      // For file control options (e.g., open(), O_RDONLY)

void pwncollege()
{
    const char *password = "nocezmbu"; // hardcoded password
    FILE *file = fopen("/tmp/fgfhsx", "w+");

    if (!file)
    {
        perror("File open error...");
        exit(1); // Use exit instead of return in a void function
    }

    fputs(password, file); // Write the password to the file
    fclose(file); // Close the open file

    // Open the file again, this time for reading
    int fd = open("/tmp/fgfhsx", O_RDONLY);
    if (fd < 0)
    {
        perror("File open error for reading...");
        exit(1);
    }

    // Redirect stdin to the file
    if (dup2(fd, STDIN_FILENO) < 0)
    {
        perror("dup2 error...");
        exit(1);
    }
    close(fd); // Close the file descriptor since it's now duplicated

    // Prepare to execute the challenge program
    char *argv[] = {"/challenge/embryoio_level33", NULL};
    execve("/challenge/embryoio_level33", argv, NULL);

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