#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocating memory.
 * @b: the first input.
 * Return: the result.
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
