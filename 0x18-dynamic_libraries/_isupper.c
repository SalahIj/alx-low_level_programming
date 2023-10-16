#include <ctype.h>

/**
 * _isupper - for checking the uppercase character.
 * Return: (1) mean uppercase, 0 otherwise.
 * @c: the input of the function.
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
