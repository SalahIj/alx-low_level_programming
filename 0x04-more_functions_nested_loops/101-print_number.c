#include "main.h"

/**
* print_number - function that prints an integer.
* @n: the input of the function.
*/

void print_number(int n)
{
	int m;

	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}
	m = n / 10;
	if (m > 0)
	{
		print_number(m);
	}

	_putchar((n % 10) + 48);
}
