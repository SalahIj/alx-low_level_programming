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
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
