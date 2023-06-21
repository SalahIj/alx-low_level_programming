#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 success
*/

int main(void)
{
	unsigned long f_1 = 0, f_2 = 1;
	unsigned long sum = 0;
	int i = 0;

	while (i < 98)
	{
		sum = f_1 + f_2;
		printf("%lu", sum);
		f_1 = f_2;
		f_2 = sum;
		if (i == 97)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
		i++;
	}
	return (0);
}
