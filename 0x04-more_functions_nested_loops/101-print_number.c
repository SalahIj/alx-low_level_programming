#include "main.h"

/**
* print_number - function that prints an integer.
* @n: the input of the function.
* Return: none.
*/

void print_number(int n)
{
	unsigned int m = n;

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
