#include "search_algos.h"

/**
 * binary_search - the name of the function
 * @array: the first input
 * @size: the second input
 * @value: the third input
 * Return: the result
 */
int binary_search(int *array, size_t size, int value)
{
	int j, right, left;

	left = 0;
	right = (int)size - 1;
	if (array == NULL)
		return (-1);
	while (right >= left)
	{
		printf("Searching in array: ");
		for (j = left; j <= right; j++)
			printf("%d ", array[j]);
		printf("\n");
		j = (right + left) / 2;

		if (array[j] == value)
			return (j);
		else if (array[j] > value)
			right = j - 1;
		else
			left = j + 1;
	}
	return (-1);
}
