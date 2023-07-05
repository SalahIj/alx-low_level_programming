#include "main.h"

/**
 * _iter_square - finding a squre.
 * @p: the first input.
 * @j: the second input.
 * Return: the result.
 */

int _iter_square(int p, int j)
{
	if (j * j < p)
	{
		j++;
		_iter_square(p, j);
	}
	else if (j * j == p)
	{
		return (j);
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - calculing a squre.
 * @n: the input of the function.
 * Return: the result.
 */

int _sqrt_recursion(int n)
{
	return (_iter_square(n, 0));
}
