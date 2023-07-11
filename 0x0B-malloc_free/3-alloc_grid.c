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
	int **m, i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	m = malloc(sizeof(*m) * height);
	if (m == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			m[i] = malloc(sizeof(**m) * width);
			if (m[i] == NULL)
			{
				free(m[i]);
				free(m);
				return (NULL);
			}
			else
			{
				j = 0;
				while (j < width)
				{
					*(*(m + i) + j) = 0;
					j++;
				}
			}
		}
		return (m);
	}
	free(m);
}
