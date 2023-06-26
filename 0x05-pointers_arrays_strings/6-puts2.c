#include "main.h"

/**
 * puts2 - printing character in even position.
 * @str: the input of the function.
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}
