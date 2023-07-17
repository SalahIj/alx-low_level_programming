#include <stdio.h>
#include <unistd.h>

/**
 * *_putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * *_puts - printings strings.
 * @s: the input of the function.
*/

void _puts(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		_putchar(s[i]);
	}
}

/**
 * main - entery
 * Return: 0 Always
 */

int main(void)
{
	_puts(__FILE__);
	_putchar('\n');
	return (0);
}
