#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	pid_t child_pid;
	int number_childs = 5, i, status;
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};

	for (i = 0; i < number_childs; i++)
	{
		child_pid = fork();

		if (child_pid == -1)
		{
			perror("Error:");
			return(1);
		}
		if (child_pid == 0)
		{
			printf("%u, %u \n", getpid(), getppid());
			execve(argv[0], argv, NULL);
		}
		else
		{
			wait(&status);
		}
	}
	return (0);
}
