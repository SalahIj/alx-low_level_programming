#include <stdio.h>
#include "main.h"

/**
 * *_puts - printings strings.
 * @s: the input of the function.
*/

void _puts(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		_putchar(s[i]);
	}
}
