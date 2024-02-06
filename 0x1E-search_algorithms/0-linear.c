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
	int index;

	index = 0;
	while (index < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		index++;
	}
	return (-1);
}
