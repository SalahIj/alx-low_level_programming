#include <stdio.h>

/**
* main - Entry point
* Return: Always (0)
*/



int main(void)
{
	int a = 1, b = 2, s = 0, t;

	while (a <= 4000000)
	{
		if (a % 2 == 0)
		{
			s += a;
		}
		t = a;
		a = b;
		b = t + b;
	}

	printf("%d\n", sum);
	return (0);
}
