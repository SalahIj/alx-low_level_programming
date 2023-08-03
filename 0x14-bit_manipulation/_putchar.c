#include <unistd.h>

/**
<<<<<<< HEAD
 *  * _putchar - writes the character c to stdout
 *   * @c: The character to print
 *    *
 *     * Return: On success 1.
 *      * On error, -1 is returned, and errno is set appropriately.
=======
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
>>>>>>> d9e8da8f65f775ff89cfdf5081e1cc4c4aaa5fdc
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
