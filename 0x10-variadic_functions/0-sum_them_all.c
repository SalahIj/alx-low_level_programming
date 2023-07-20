#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - calculiting sum
 * @n: the first input.
 * Return: the result.
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list p;

	va_start(p, n);
	if (n == 0)
		return (0);

	i = 0;
	while (i < n)
	{
		sum += va_arg(p, int);
		i++;
	}
	va_end(p);
	return (sum);
}
