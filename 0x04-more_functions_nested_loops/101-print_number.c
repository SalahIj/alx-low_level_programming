#include "main.h"

/**
* print_number - function that prints an integer.
* @n: the input of the function.
*/

void print_number(int n)
{
	int m = n;

	if (n < 0)
	{
		_putchar('-');
		m = -m;
	}
	if (m / 10)
	{
		print_number(m / 10);
	}

	_putchar((m % 10) + 48);
}
