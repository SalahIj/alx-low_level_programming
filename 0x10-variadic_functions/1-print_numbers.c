#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prunting numbers.
 * @separator: the first input.
 * @n: the seocnd input.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	if (n == 0)
	{
		printf("\n");
	}
	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
		if (i != n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(p);
}
