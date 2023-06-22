#include "main.h"

/**
* more_numbers - function that prints 10 times the numbers, from 0 to 14.
*/

void more_numbers(void)
{
	int i = 0, j, num;

	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			num = j;
			if (j > 9)
			{
				_putchar((j / 10) + 48);
				num = j % 10;
			}
			_putchar(num + 48);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
