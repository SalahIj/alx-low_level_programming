#include "main.h"

/**
 * _iter_recu_prime - verifieing prime number
 * @p: the first input.
 * @j: the second input.
 * Return: the result.
 */

int _iter_recu_prime(int p, int j)
{
	if (p <= j && p > 1)
	{
		return (1);
	}
	else if (p % j == 0 || p <= 1)
	{
		return (0);
	}
	else
	{
		j++;
		return (_iter_recu_prime(p, j));
	}
}

/**
 * is_prime_number - priming
 *@n: the input
 * Return: the result.
 */

int is_prime_number(int n)
{
	return (_iter_recu_prime(n, 2));
}

