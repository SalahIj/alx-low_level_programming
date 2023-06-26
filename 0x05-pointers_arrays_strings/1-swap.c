#include <stdio.h>

/**
 * swap_int - swaping the values of two integers.
 * @a: the first input.
 * @b: the second input.
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
