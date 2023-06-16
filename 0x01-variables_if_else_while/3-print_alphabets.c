#include <stdio.h>
/**
* main - print the alphabet in lowercase and in uppercase.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char i = 'a';
	char j = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
