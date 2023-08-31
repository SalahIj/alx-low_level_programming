#include "main.h"

/**
 * clear_bit - the name of the function.
 * @n: Entry 1.
 * @index: Entry 2.
 * Return: The result.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int w;
	int temoin, m;

	w = sizeof(unsigned long int) * 8;
	temoin = 1ul << index;
	if (index >= w)
		m = -1;
	else
	{
		if (temoin & *n)
			*n = (~temoin & *n);
		m = 1;
	}
	return (m);
}
