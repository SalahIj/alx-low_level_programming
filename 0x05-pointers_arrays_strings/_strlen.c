#include <stdio.h>

/**
 * _strlen - calculing the number of character in a string.
 * @s: the input of the function
 * Return: the length calcualeted
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
