#include "main.h"

/**
* string_toupper - changin letters from lowercase to uppercase.
* @str: the first input.
* Return: the result
*/

char *string_toupper(char *str)
{
	int i;
	char *p;

	p = str;
	for (i = 0; str[i] != '\0' && (str[i] >= 'a' && str[i] <= 'z'); i++)
	{
		p[i] = str[i] - 32;
	}
	return (p);
}
