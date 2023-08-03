#include "main.h"

/**
 *  * clear_bit - clearring bits.
 *   * @n: the first input.
 *    * @index: the second input.
 *     * Return: the result.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size;
	int tmp;

	size = sizeof(n) * 8;
	if (index >= size)
		return (-1);

	tmp = 1ul << index;

	if (tmp & *n)
		*n = (~tmp & *n);

	return (1);
}
