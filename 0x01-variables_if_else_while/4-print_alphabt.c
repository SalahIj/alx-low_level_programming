#include <stdio.h>
/**
* main - print the alphabet in lowercase and in uppercase without 'e' and 'q'.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i == 'e' || i == 'q')
		{
			i++;
		}
		else
		{
			putchar(i);
			i++;
		}
	}
	putchar('\n');
	return (0);
}

