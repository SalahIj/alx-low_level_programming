#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 success
*/

int main(void)
{
	int i;
	unsigned long f_1 = 0, f_2 = 1, s;

	for (i = 0; i < 50; i++)
	{
		s = f_1 + f_2;
		printf("%lu", s);
		f_1 = f_2;
		f_2 = s;
		if (i == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
