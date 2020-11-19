#include <stdio.h> 
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>
#include <unistd.h>

int exec_own(char **ag)
{
	pid_t child_pid;
	int status;

	child_pid = fork();

	if (child_pid == 0)
	{
		execve(ag[0], ag, NULL);
	}
	if (child_pid > 0)
		wait(&status);
	else
		return (-1);
}

void arg_to_str(char *com, int read)
{
	int i = 0;
	char *array[] = {NULL, NULL, "/.", NULL};

	com[read - 1] = '\0';
	array[0] = com;	
	exec_own(array);
}

int main(void)
{
	char *console_prompt = "#cisfun$ ";
	char *line = NULL;
	size_t line_size = 0;
	int read;

	while(1)
	{
		write(STDOUT_FILENO, console_prompt, 9);
		read = getline(&line, &line_size, stdin);
		arg_to_str(line, read);
		if (line[0] == '1')
			break;
		/* write(1, line, read);*/
	}
	free(line);
	return (0);
}
