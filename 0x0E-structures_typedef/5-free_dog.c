#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_dog - print atributos
* @d: object dog
*/

void free_dog(struct dog *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
