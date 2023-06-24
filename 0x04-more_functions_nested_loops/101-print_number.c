#include "main.h"

/**
* print_number - prints a random integer.
* @n: input of the function.
* Return: none.
*/

void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		_putchar('-');
		m = -1 * m;
	}
	if (m / 10)
	{
		print_number(m / 10);
	}

	_putchar((m % 10) + '0');
}
