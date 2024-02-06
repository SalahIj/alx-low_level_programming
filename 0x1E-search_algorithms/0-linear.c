#include "search_algos.h"

/**
 * linear_search - The function name
 * @array: The first input
 * @size: The second input
 * @value: The third input
 * Return: The result
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	i = 0;
	while (i < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
