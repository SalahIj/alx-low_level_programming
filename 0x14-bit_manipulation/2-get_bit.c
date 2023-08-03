#include "main.h"

/**
 *  * get_bit - getting value.
 *   * @n: the first input.
 *    * @index: the second input.
 *     * Return: the result.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int byte = sizeof(n) * 8;
	int value;

	if (index >= byte)
		return (-1);

	value = (n >> index) & 1;
	return (value);
}
