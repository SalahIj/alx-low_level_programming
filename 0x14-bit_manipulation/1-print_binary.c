#include "main.h"

/**
 * print_binary - The name of the function.
 * @n: The entry.
 * Return: The result.
 */

void print_binary(unsigned long int n)
{
	int i = 0, c = 0, j;

	if (n == 0)
		_putchar('0');

	else
	{
		while (n >> i)
			i++;

		for (j = i - 1; j >= 0; j--)
		{
			c = (n >> j) & 1;
			_putchar(c + '0');
			i++;
		}
	}
}
