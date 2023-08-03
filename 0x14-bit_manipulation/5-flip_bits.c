#include "main.h"

/**
 *  * flip_bits - flipping bits.
 *   * @n: the first input.
 *    * @m: the second input.
 *     * Return: the result.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int size = sizeof(unsigned long int) * 8;
	unsigned long int X = n ^ m;
	int counter = 0, i;

	i = size - 1;
	while (i >= 0)
	{
		if ((X >> i) & 1)
			counter++;
		i--;
	}
	return (counter);
}
