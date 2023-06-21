#include "main.h"
#include <stdio.h>

/**
* print_to_98 - prints all natural numbers from n to 98
* @n: the input of the function.
*/

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		i = n;
		while (i <= 98)
		{
			printf("%d, ", i);
			i++;
		}
		printf("98\n");
	}
	else
	{
		i = n;
		while (i > 98)
		{
			printf("%d, ", i);
			i--;
		}
		printf("98\n");
	}
}
