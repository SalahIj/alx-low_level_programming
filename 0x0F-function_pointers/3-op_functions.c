#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - additionnig numbers.
 * @a: the first input.
 * @b: the second input
 * Return: the result.
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substructing numbers.
 * @a: the first input.
 * @b: the second input
 * Return: the result.
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplying numbers.
 * @a: the first input.
 * @b: the second input
 * Return: the result.
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - diviing numbers.
 * @a: the first input.
 * @b: the second input
 * Return: the result.
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a / b);
	}
}

/**
 * op_mod - modeling numbers.
 * @a: the first input.
 * @b: the second input
 * Return: the result.
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a % b);
	}
}
