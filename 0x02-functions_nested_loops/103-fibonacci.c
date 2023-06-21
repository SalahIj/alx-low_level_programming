#include <stdio.h>

/**
* main - Entry point
* Return: Always (0)
*/

int main(void)
{
	int a = 1, b = 2, sum = 0, tem;

	while (a <= 4000000)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}
		tem = a;
		a = b;
		b = tem + b;
	}
	printf("%d\n", sum);
	return (0);
}
