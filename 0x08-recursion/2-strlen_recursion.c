#include "main.h"

/**
* _strlen_recursion - calculting the length.
* @s: the input of the function.
* Return: the result.
*/

int _strlen_recursion(char *s)
{
	int i;

	if (*s != '\0')
	{
		s++;
		i = 1 +  _strlen_recursion(s);
	}
	return (i);
}
