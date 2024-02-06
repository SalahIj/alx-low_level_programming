#include "search_algos.h"

/**
 * binary_search - The function name
 * @array: The first input
 * @size: The second input
 * @value: The third input
 * Return: The result
 */
int binary_search(int *array, size_t size, int value)
{
	size_t j = 0, left = 0, right = size - 1;

	if (array != NULL)
	{
		while (left <= right)
		{
			printf("Searching in array: ");
			for (j = left; j <= right; j++)
			{
				if (j != left)
					printf(", ");
				printf("%d", array[j]);
			}
			printf("\n");
			j = (left + right) / 2;
			if (value > array[i])
				left = j + 1;
			else if (value < array[i])
				right = j - 1;
			else
				return (j);
		}
	}
	return (-1);
}
