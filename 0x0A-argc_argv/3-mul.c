#include <stdio.h>
#include <stdlib.h>

/**
 * main - the principal
 * Return: 0 Always seccsees
 * @argc: the first input
 * @argv: the second input
 */

int main(int argc, char **argv)
{
	int a = 0, b = 0, R;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(*(argv + 1));
		b = atoi(*(argv + 2));
		R = a * b;
		printf("%d\n", R);
	}
	return (0);
}
