#include "main.h"

/**
 * flip_bits - The name of the function.
 * @n: Entry 1.
 * @m: Entry 2.
 * Return: The result.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int w;
	unsigned long int x = n ^ m;
	int c = 0, j;

	w = sizeof(unsigned long int) * 8;
	j = w - 1;
	for (j = w - 1; j >= 0;)
	{
		if ((x >> j) & 1)
			c++;
		j--;
	}
	return (c);
}
