#include <unistd.h>
#include <stdio.h>

extern char** environ;

void main(int ac, char** av, char** env)
{
	int i;

	while (environ[i] && env[i])
	{
		printf("%p ",environ[i]);
		printf("%p\n", env[i]);
		i++;
	}
}
