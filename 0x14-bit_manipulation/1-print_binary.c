#include "main.h"

/**
 * print_binary - the name of the fucntion.
 * @n: the entry
 */

void print_binary(unsigned long int n)
{
	int i, p = 0, w = sizeof(unsigned int long) * 8;

	for (i = w - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar(49);
			p++;
		}
		else if (p != 0)
		{
			_putchar(48);
		}
	}

	if (p == 0)
	{
		_putchar(48);
	}
}

