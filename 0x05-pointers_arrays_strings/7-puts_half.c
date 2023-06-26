#include "main.h"

/**
 * puts_half - printing half charcters in a string.
 * @str: the input of the function.
 */

void puts_half(char *str)
{
	int i = 0, n, j;
	char *p;

	p = str;
	while (*p != 0)
	{
		i++;
		p++;
	}
	n = (i - 1) / 2;
	for (j = n + 1; j < i; j++)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');
}
