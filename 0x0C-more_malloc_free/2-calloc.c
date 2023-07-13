#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocating an array
 * @nmemb: the first input.
 * @size: the second input.
 * Return: the result.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i, num;

	num = nmemb * size;
	if (num == 0)
	{
		return (NULL);
	}
	p = malloc(num);
	if (p == NULL)
	{
		return (NULL);
	}
	while (i < num)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
