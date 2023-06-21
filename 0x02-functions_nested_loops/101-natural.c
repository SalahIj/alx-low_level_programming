#include <stdio.h>

/**
 * multip_sum - computes and prints the sum of all the multiples of '3' or '5'.
 * @n: the input for function.
 * Return: the sum.
 */

int multip_sum(int n)
{
	int s = 0;
	int i = 0;

	while (i < n)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			s = s + i;
		}
		i++;
	}
	printf("%d\n", s);
	return (s);
}
