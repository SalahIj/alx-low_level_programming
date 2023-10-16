#include <stdio.h>
#include "main.h"

/**
 * _memcpy -  coping a block of memory.
 * @dest: the first input.
 * @src: the second input.
 * @n: the third input.
 * Return: the result.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
