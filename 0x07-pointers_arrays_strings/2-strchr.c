#include <stdio.h>
#include "main.h"

/**
* _strchr - locating a char in a string.
* @s: the first input.
* @c: the second input.
* Return: the result.
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return ('\0');
}
