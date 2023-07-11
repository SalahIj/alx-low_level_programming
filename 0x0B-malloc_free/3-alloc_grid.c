#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - 2D array
 * @width: the first input.
 * @height: the second input.
 * Return: the result.
 */

int **alloc_grid(int width, int height)
{
	int **m, s, i, j, k = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	m = malloc(sizeof(*m) * height);
	if (m == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		m[i] = malloc(sizeof(**m) * width);
		if (m[i] == NULL)
		{
			while (i >= 0)
			{
				free(m[i]);
				i--;
			}
			free(m);
			return (NULL);
		}
		else
		{
			j = 0;
			while (j < width)
			{
				*(*(m + k) + j) = 0;
				j++;
			}
			k++;
		}
	}
	return (m);
	for (s = 0; s < height; s++)
	{
		free(m[s]);
	}
	free(m);
}
