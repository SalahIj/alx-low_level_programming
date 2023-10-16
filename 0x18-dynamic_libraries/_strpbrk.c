#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - matching characters.
 * @s: the first input.
 * @accept: the second input.
 * Return: the result.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
		i++;
	}
	return ('\0');
}
