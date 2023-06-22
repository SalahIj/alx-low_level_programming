#include <ctype.h>

/**
* _isdigit - function that checks for a digit (0 through 9).
* Return: 1 if c is a digit, 0 otherwise.
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
