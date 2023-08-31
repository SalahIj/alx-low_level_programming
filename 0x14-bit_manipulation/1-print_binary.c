#include "main.h"

/**
 * print_binary - the name of the function
 * @n: the entry
 * Return: the result.
 */

void print_binary(unsigned long int n)
{
	int contour = 0;
	unsigned long int p;

	for (p = n; p > 0; p >>= 1)
	{
		if (p & 1)
		{
			_putchar('1');
			contour++;
		}
		else if (contour != 0)
		{
			_putchar('0');
		}
	}
	if (contour == 0)
	{
		_putchar('0');
	}
}

