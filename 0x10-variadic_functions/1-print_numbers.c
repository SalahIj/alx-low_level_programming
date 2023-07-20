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

	if (n == 0 || separator == NULL)
	{
		printf("\n");
	}
	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		if (separator)
		{
			printf("%d", va_arg(p, int));
			if (i == n - 1)
			{
				printf("\n");
				break;
			}
			printf("%s", separator);
		}
	}
}
