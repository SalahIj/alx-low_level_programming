#include "main.h"

/**
 * puts2 - printing character in even position.
 * @str: the input of the function.
 */

void puts2(char *str)
{
	int l = 0, i;
	char *p;

	p = str;
	while (*p != '\0')
	{
		p++;
		l++;
	}
	for (i = 0; i < l; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
