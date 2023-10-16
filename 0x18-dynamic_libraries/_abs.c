#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: is the input of _abs function.
 * Return: the absolute value.
 */
int _abs(int n)
{
	int num;

	if (n < 0)
	{
		num = -1 * n;
		return (num);
	}
	else
	{
		return (n);
	}
}
