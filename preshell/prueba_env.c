#include <unistd.h>
#include <stdio.h>

extern char **environ;

void main(void)
{
	int i = 0;

	while (environ[i])
	{
		printf("%s\n",environ[i]);
		i++;
	}
}
