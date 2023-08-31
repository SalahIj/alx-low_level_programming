#include "main.h"

/**
 * set_bit - the name of the function.
 * @n: Entry 1.
 * @index: Entry 2.
 * Return: The Result.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int w;
	int temoin, m;

	w = sizeof(unsigned long int) * 8;
	if (index >= w)
		m = -1;
	else
	{
		temoin = (1ul << index);
		*n = (temoin | *n);
		m = 1;
	}
	return (m);
}
