#include <stdio.h>      // For standard input/output functions
#include <stdlib.h>     // For exit(), NULL
#include <unistd.h>     // For fork(), execve(), getpid(), etc.
#include <sys/types.h>  // For data types used in system calls (e.g., pid_t)
#include <sys/wait.h>   // For wait() and related macros

void pwncollege () {
    char *argv[] = {"/challenge/embryoio_level30", NULL};  // Argument vector
    execve("/challenge/embryoio_level30", argv, NULL);
    exit(0);
}

int main (int argc, char argv[]) {
	pid_t cpid;

	if (fork() == 0) {
		pwncollege();
	}
	else {
		cpid = wait(NULL);
	}

	return 0;
}