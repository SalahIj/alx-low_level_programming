#include <stdio.h>

/**
* _strchr - locating a char in a string.
* @s: the first input.
* @c: the second input.
* Return: the result.
*/

char *_strchr(char *s, char c)
{
	int i, t = 0;

	for (i = 0; s[i]; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
			t = 1;
		}
	}
	if (t == 0)
	{
		return ('\0');
	}
}
