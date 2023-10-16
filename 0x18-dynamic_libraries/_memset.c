#include <stdio.h>
#include "main.h"

/**
 * _memset - filling a block of memory.
 * @s: the first input.
 * @b: the second input.
 * @n: the third input.
 *  Return: the result.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
