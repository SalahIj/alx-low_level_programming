#include "main.h"
#include <stdio.h>

/**
* print_diagsums - summing the diagonals
* @a: the first input.
* @size: the second input.
*/


void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0;

	while (i < size)
	{
		sum1 += a[i];
		sum2 += a[size - i - 1];
		a += size;
		i++;
	}
	printf("%d %d\n", sum1, sum2);
}
