#include <stdio.h>
/**
* main - print the alphabet in lowercase.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
