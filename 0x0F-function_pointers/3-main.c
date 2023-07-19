#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - entery
 * @argc: the first input.
 * @argv: the second input.
 * Return: the result.
*/

int main(int argc, char *argv[])
{
	int a, b;
	int (*oper_function)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	oper_function = get_op_func(argv[2]);
	if (oper_function == 0 || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if (b == 0 && (*(argv[2]) == '/' || *(argv[2]) == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", oper_function(a, b));
	return (0);
}
