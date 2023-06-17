#include <stdio.h>
/**
* main - prints all possible combinations of two two-digit numbers.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	int k;

	for (i = 0 ; i < 100 ; i++)
	{
		for (k = 0 ; k < 100 ; k++)
		{
			if (i < k)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((k / 10) + '0');
				putchar((k % 10) + '0');
				if (i != 98 || k != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
