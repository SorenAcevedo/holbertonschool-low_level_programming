#include <stdlib.h>
/**
* _calloc -  allocates memory for an array of nmemb elements of size
* @nmemb: int
* @size: int
* Return: void pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	p = malloc(nmemb * size);
	return (p);
}
