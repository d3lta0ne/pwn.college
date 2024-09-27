#include <stdio.h>	// For standard input and output functions
#include <stdlib.h> // For standard library functions

// Including these removes some of the additional warnings that we recieve in the problem.
// #include <unistd.h>	  // For POSIX operating system API (execve, fork)
// #include <sys/wait.h> // For wait function

void pwncollege()
{
	char *argv[] = {"/challenge/embryoio_level29", NULL}; // Argument vector
	execve("/challenge/embryoio_level29", argv, NULL);
	exit(0);
}

int main(int argc, char argv[])
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