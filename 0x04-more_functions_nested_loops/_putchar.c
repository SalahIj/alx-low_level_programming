#include <unistd.h>

/**
 * _putchar - function
 * @a: the input of the function of _putchar
 * Return: 1 mean success
 */

int _putchar(char a)
{
	return (write(1, &a, 1));
}
