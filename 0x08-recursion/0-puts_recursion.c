#include "main.h"

/**
* _puts_recursion - printing a string
* @s: the input of the function.
*/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar (*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
