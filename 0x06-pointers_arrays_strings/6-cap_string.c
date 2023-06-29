#include "main.h"

/**
* cap_string - capitalising characters.
* @str: the first input.
* Return: the result
*/

char *cap_string(char *str)
{
	int i, j;
	char sepa[] = {' ', ',', ';', '.', '!', '?',
		'\"', '(', ')', '{', '}', '\n', '\t'
			};

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == sepa[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}
	}
	return (str);
}
