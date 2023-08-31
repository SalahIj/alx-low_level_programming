#include "main.h"

/**
 * get_bit - the name of the function.
 * @n: Entry 1.
 * @index: Entry 2.
 * Return: The number of bits.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int w;
	int m;

	w = sizeof(unsigned long int) * 8;
	if (index >= w)
		m = -1;
	else
		m = (n >> index) & 1;

	return (m);
}
