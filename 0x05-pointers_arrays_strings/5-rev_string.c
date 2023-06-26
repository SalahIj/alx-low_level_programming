#include"main.h"

/**
 * rev_string - reversing a string.
 * @s: the input of the function.
 */

void rev_string(char *s)
{
	int i = 0, j;
	char str;
	char *p;

	p = s;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	for (j = 0; j < i; j++)
	{
		i--;
		str = *(p + j);
		*(p + j) = *(p + i);
		*(p + i) = str;
	}
}
