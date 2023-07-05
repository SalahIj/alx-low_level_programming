#include "main.h"

/**
* _strlen_recursion - calculting the length.
* @s: the input of the function.
* Return: the result.
*/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 +  _strlen_recursion(s));
	}
	else
	{
		return (0);
	}
}
