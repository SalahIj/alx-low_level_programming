#include "main.h"

/**
* print_number - printing an integer.
* @n: the input of the function.
*/

void print_number(int n)
{
	int p = 0, s = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	p = n / 10;
	s = n % 10;
	if (p  > 0)
	{
		print_number(p);
	}
	_putchar(s + '0');
}
