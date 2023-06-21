#include <stdio.h>

/**
* main - Entry point
* Return: Always 0.
*/


int main(void)
{
	unsigned long f1 = 0, f2 = 1 ,s;
	float T;

	while (1)
	{
		s = f1 + f2;
		if (s > 4000000)
		{
			break;
		}
		if else ((s % 2) == 0)
		{
			T += s;
			f1 = f2;
			f2 = s;
		}
		printf("%.0f\n", T);
	}
	return (0);
}
