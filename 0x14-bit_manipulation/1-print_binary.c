#include "main.h"

/**
<<<<<<< HEAD
 *  * print_binary - printing.
 *   * @n: the input of the function.
 *    * Return: the result.
 */
=======
 * print_binary - printing.
 * @n: the input of the function.
 * Return: the result.
*/
>>>>>>> d9e8da8f65f775ff89cfdf5081e1cc4c4aaa5fdc

void print_binary(unsigned long int n)
{
	int i, counter = 0;
	int b = sizeof(unsigned int long) * 8;

	i = b - 1;
	while (i >= 0)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter != 0)
		{
			_putchar('0');
		}
		i--;
	}
	if (counter == 0)
	{
		_putchar('0');
	}
}

