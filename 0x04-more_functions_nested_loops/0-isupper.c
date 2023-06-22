#include <ctype.h>

/**
* _isupper - function that checks for uppercase character.
* Return: 1 if c is uppercase, 0 otherwise.
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
