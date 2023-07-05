#include "main.h"

/**
 * _pow_recursion - calculing the power.
 * @x: the first input.
 * @y: the second input.
 * Return: the result.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		y--;
		return (x * _pow_recursion(x, y));
	}
}

