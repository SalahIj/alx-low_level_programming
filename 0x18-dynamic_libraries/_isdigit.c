#include <ctype.h>

/**
 * _isdigit - check for a digit (0 through 9).
 * Return: 1 mean digit, 0 mean non digit.
 * @c: the input of the function.
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
