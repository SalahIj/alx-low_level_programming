#include "main.h"

/**
 *  * set_bit - settint bits.
 *   * @n: the first input.
 *    * @index: the second input.
 *     * Return: the result.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int tmp;
	unsigned int size = sizeof(n) * 8;

	if (index > size)
		return (-1);
	tmp = 1ul << index;

	*n = (tmp | *n);
	return (*n);
}
