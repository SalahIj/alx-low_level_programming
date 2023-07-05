#include "main.h"

/**
* factorial - calculing a factoriel of a number.
* @n: the input of the function.
* Return: the result.
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (factorial(n - 1) * n);
	}
}
