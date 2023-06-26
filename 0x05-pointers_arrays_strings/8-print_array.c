#include "main.h"
#include <stdio.h>

/**
 * print_array - printing elements of an array.
 * @a: the first input.
 * @n: the second input of the function.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
