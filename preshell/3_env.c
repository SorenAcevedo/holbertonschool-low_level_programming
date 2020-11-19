#include <unistd.h>
#include <stdio.h>

extern char** environ;

int my_strcmp(char *env, const char *str, int len)
{
	int j;

	for (j = 0; j < len; j++)
		if (env[j] != str[j])
			return (-1);
	return (0);

}

char *my_getenv(const char *name)
{
	int i, len = 0;

	while (name[len])
		len++;

	for(i = 0; environ[i]; i++)
	{
		if (my_strcmp(environ[i], name, len) == 0)
			return (environ[i]);
	}

	return (NULL);
}

int main(void)
{
	const char *c = "PATH";
	char *e = NULL;
	int tr = 0;
	e = my_getenv(c);

	if (e)
	{
		printf("This variable \"%s\" have this enviroment:\n", c);

		while(e[tr])
		{
			if (e[tr] == ':')
				putchar(10);
			else
				putchar(e[tr]);
			tr++;
		}
		return (1);
	}
	return (0);		
}
