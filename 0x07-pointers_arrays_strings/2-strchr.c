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
	int i, t = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (*(s + i) == c)
		{
			break;
			t = 1;
		}
	}
	return (s + i);
	if (t == 0)
	{
		return ('\0');
	}
}
