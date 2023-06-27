#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - door
 * Return: Always 0.
 */

int main(void)
{
	int s;
	char k;

	srand(time(NULL));
	while (s <= 2645)
	{
		k = rand() % 128;
		printf("%c", k);
		s = s + k;
	}
	putchar(2772 - s);
	return (0);
}
