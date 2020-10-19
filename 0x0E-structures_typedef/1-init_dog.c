#include "dog.h"
#include <stdlib.h>

/**
* init_dog - create a new dog
* @d: name of object
* @name: name of the new dog
* @age: age of the new dog
* @owner: name of the owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
