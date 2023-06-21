#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the input of the function.
 */

void print_times_table(int n)
{
	int i = 0;
	int j, m;

	if (n > 0 && n < 15)
	{
		while (i <= n)
		{
			_putchar('0');
			j = 1;
			while (j <= n)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				m = i * j;
				if (m <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(m + '0');
				}
				else if (m >= 10 && m <= 99)
				{
					_putchar(' ');
					_putchar((m / 10) + '0');
					_putchar((m % 10) + '0');
				}
				else
				{
					_putchar((m / 100) + '0');
					_putchar(((m / 10) % 10) + '0');
					_putchar((m % 10) + '0');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
