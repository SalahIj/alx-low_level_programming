#include <stdio.h>
/**
* main - prints the lowercase alphabet in reverse.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
