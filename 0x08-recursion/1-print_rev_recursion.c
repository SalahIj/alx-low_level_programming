#include "main.h"

/**
* _print_rev_recursion - printing in reverse.
* @s: the input of the function
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*(s - 1));
	}
}
