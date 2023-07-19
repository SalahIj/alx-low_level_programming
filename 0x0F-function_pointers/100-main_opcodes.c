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
	int byt, i;
	int (*m)(int, char **) = main;
	char *p = (char *)m;

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
	while (i < byt)
	{
		printf("%02hhx", p[i]);
		printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
