#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of '3' or '5'.
 * 
 * Return: the sum.
 */

int main(void)
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
	return (0);
}
