#include "main.h"

/**
 * binary_to_uint -  converting binary.
 * @b: the input of the function.
 * Return: the result.
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, j;
	unsigned int n = 0;

	if (b == NULL)
		return (0);

	while (*(b + i))
	{
		if (*(b + i) != '0' && *(b + i) != '1')
			return (0);
		i++;
	}

	for (i--, j = 0; i >= 0; i--, j++)
		n += (1 << i) * (b[j] - '0');

	return (n);
}
