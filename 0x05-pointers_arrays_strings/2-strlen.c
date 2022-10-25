#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: length of string
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
