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
	int i, j = 0;

	if (min > max)
	{
		return (NULL);
	}
	tab = (int *)malloc(sizeof(tab) * (max - min + 1));
	if (tab == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		tab[j] = i;
		j++;
	}
	return (tab);
}
