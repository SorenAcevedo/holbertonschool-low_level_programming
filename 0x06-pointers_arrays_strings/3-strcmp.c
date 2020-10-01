#include "holberton.h"
/**
* _strcmp - compare 2 str
* @s1: str 1
* @s2: str 2
* Return: final str
*/
int _strcmp(char *s1, char *s2)
{
	int i, dif = 0;

	for (i = 0; s1[i] == s2[i] && s1[i] != '\0'; i++)
	{
	}
	dif = s1[i] - s2[i];
	return (dif);
}
