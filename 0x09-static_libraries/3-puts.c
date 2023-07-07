#include "main.h"

/**
 * _puts - printing a string.
 * @str: the input of the function.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
