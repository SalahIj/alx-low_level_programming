#include <stdio.h>

/**
 * add - The function name
 * @a: the first input.
 * @b: The second input.
 * Return: the result.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * mul - The function name
 * @a: the first input.
 * @b: The second input.
 * Return: the result.
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * sub - The function name
 * @a: the first input.
 * @b: The second input.
 * Return: the result.
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * div - The function name
 * @a: the first input.
 * @b: The second input.
 * Return: the result.
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Divising by zero\n");
		return (0);
	}
	else
		return (a / b);
}

/**
 * mod - The function name
 * @a: the first input.
 * @b: The second input.
 * Return: the result.
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Divising by zero\n");
		return (0);
	}
	else
		return (a % b);
}
