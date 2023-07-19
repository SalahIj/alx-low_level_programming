#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - printign names.
 * @name: the first input.
 * @f: the second input.
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
