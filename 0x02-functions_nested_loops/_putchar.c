#include <unistd.h>

/**
 * _putchar - print the character a
 * @a: the input of the function
 * Return: (1) mean success
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
