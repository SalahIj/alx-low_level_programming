#include <stdio.h>

/**
 * _atoi - string to number.
 * @s: the input of the function.
 * Return: the result.
 */

int _atoi(char *s)
{
	unsigned int n = 0;
	int sig = 1;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sig = sig * (-1);
		}
		else if (*s >= '0' && *s <= '9')
		{
			n = (n * 10) + (*s - '0');
		}
		else if (n  > 0)
		{
			break;
		}
		s++;
	}
	return (n * sig);
}

