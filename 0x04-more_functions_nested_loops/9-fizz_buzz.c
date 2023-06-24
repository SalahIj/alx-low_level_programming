#include "main.h"
#include <stdio.h>

/**
* main - door of code.
* Return: Always 0 is a success.
*/


int main(void)
{
	int j = 1;

	while (j <= 100)
	{
		if ((j % 3 == 0) && (j % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (j % 3 == 0)
		{
			printf("Fizz");
		}
		else if (j % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (j != 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
		j++;
	}
	return (0);
}
