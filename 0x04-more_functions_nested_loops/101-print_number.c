#include "main.h"

/**
* print_number - function that prints an integer.
* @n: the input of the function.
*/

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}
	if ((n / 10) > 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + 48);
}