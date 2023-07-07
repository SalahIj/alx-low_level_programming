#include <stdio.h>

/**
 * main - the principal
 * Return: 0 Always seccsees
 * @argc: the first input
 * @argv: the second input
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", *(argv + i));
		i++;
	}
	return (0);
}
