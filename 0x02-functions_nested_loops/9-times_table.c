#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int i = 0;
	int j, m;

	while (i <= 9)
	{
		_putchar('0');
		j = 1;
		while (j <= 9)
		{
			_putchar(',');
			_putchar(' ');
			m = i * j;
			if (m <= 9)
			{
				_putchar(' ');
				_putchar(m + '0');
			}
			else
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
