#include <stdlib.h>

/**
* _calloc -  allocates memory for an array of nmemb elements of size
* @nmemb: int
* @size: int
* Return: void pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		p = malloc(nmemb * size);
		if (p != NULL)
			for (i = 0; i < nmemb * size; i++)
				p[i] = 0;
			return (p);
	}

	return (NULL);
}
