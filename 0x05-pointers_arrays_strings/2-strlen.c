#include <stdio.h>

/**
 * _strlen - length of a string.
 * @s: the input of the function.
 * Return: the lenght.
 */

int _strlen(char *s)
{
	int i = 0;

	do {
		i++;
		s++;
	} while (*s != '\0');
	return (i);
}
