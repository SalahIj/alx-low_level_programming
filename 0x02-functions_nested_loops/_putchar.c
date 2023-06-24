#include <unistd.h>

/**
 * _putchar - print the input a
 * @a: input of the function _putchar.
 * Return: (1) mean success
 */

int _putchar(char a)
{
	return (write(1, &a, 1));
}
