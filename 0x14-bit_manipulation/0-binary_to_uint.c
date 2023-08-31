#include "main.h"

/**
 * binary_to_uint -  The name of the function.
 * @b: the entry
 * Return: the result.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int somme = 0;
	int i, j;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (*(b + i) != '0' && *(b + i) != '1')
			return (0);
	}
	j = i--;
	while (j >= 0)
	{
		somme += (b[j] - '0') * (1 << (i - j));
		j--;
	}
	return (somme);
}
