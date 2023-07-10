#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creating an array
 * Return: the result
 * @size: the first input
 * @c: the second input.
 */

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}
	else
	{
		t = malloc(sizeof(char) * size);
		for (i = 0; i < size; i++)
		{
			t[i] = c;
		}
	}
	return (t);
}

