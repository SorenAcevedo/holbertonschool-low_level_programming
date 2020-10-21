#include <stdio.h>

/**
* print_name - print a name between the use of p to funct
* @name: name to print
* @f: pointer to function to use
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}
