#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - printing all
 * @format: the input
 */

void print_all(const char * const format, ...)
{
	va_list ptr;
	char *srd;

	va_start(ptr, format);
	if (format != NULL)
	{
		int i = 0;

		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'i':
					printf("%d", va_arg(ptr, int));
					break;
				case 'c':
					printf("%c", va_arg(ptr, int));
					break;
				case 'f':
					printf("%f", va_arg(ptr, double));
					break;
				case 's':
					srd = va_arg(ptr, char*);
					printf("%s", (srd == NULL) ? "(nil)" : srd);
					break;
				default:
					i++;
					continue;
			}
			switch ((int)(format[i + 1] != '\0'))
			{
				case 1:
					printf(", ");
			}
			i++;
		}
	}
	printf("\n");
	va_end(ptr);
}
