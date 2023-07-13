#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creating an array of intergs.
 * @min: the first input.
 * @max: the second input.
 * Return: the result.
 */

int *array_range(int min, int max)
{
	int *tab;
	int i, num;

	num = max - min;
	if (num < 0)
	{
		return (NULL);
	}
	tab = (int *)malloc(sizeof(tab) * (num + 1));
	if (tab == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < num + 1; i++)
	{
		tab[i] = min;
		min++;
	}
	return (tab);
}
