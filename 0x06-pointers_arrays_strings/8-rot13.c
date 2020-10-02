#include "holberton.h"
/**
* rot13 - rot13 encode
* @a: str
* Return: str
*/

char *rot13(char *a)
{
	int i, j;
	char rot[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char tor[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; a[i] != 0; i++)
	{
		for (j = 0; rot[j] != 0; j++)
		{
			if (a[i] == rot[j])
			{
				a[i] = tor[j];
				break;
			}
		}
	}
	return (a);
}
