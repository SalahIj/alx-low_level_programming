#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - printing strings
 * @separator: the first input.
 * @n: the second input.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *srt;
	va_list p;

	if (n == 0)
	{
		printf("\n");
	}
	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		srt = va_arg(p, char *);
		if (srt)
			printf("%s", srt);

		else
			printf("(nil)");

		if (i == n - 1)
		{
			printf("\n");
			break;
		}
		if (separator)
		{
			printf("%s", separator);
		}
	}
	va_end(p);
}
