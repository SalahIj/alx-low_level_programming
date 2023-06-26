#include "main.h"

/**
 * print_rev - printing a string in revesing.
 * @s: the input of the function.
 */

void print_rev(char *s)
{
	int i = 0;
	char *p;

	p = s;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	while (i >= 0)
	{
		_putchar(*(p + i));
		i--;
	}
	_putchar('\n');
}
