#include "main.h"

/**
* cap_string - capitalising characters.
* @str: the first input.
* Return: the result
*/

char *cap_string(char *str)
{
	int i, j;
	char s[] = {32, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 10, 9};

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	for (i = 1; str[i]; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				if (str[i - 1] == sepa[j])
				{
					str[i] = str[i] - 32;
				}
			}
		}
	}

	return (str);
}
