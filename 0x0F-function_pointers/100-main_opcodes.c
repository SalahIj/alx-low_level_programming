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
	long byt, i;
	int (*m)(int, char **) = main;
	unsigned char *p = (unsigned char *)m;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byt = atoi(argv[1]);
	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}
	i = 0;
	while (i < byt + 1)
	{
		printf("%02x", p[i]);
		printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
