#include <stdio.h>
#include <stdlib.h>

/**
 * main - entery.
 * @argc: the first input.
 * @argv: the second input.
 * Return: the result.
*/

int main(int argc, char *argv[])
{
	int bytes, i;
	char *m = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}
	i = 0;
	while (i < bytes)
	{
		printf("%02hhx ", m[i]);
		i++;
	}
	printf("\n");
	return (0);
}
