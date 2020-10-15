#include <stdlib.h>

/**
* malloc_checked - check pointer
* @b: size to save
* Return: void pointer
*/
void *malloc_checked(unsigned int b)
{
	/* Crear un puntero Void */
	void *p;

	p = malloc(b);

	/* Generar status 98 */
	return (p);
}
