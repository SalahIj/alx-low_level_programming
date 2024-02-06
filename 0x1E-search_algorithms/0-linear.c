#include "search_algos.h"

/**
 * linear_search - Searches value in array of ints using the Linear search algo
 *
 * @array: Array to search
 *
 * @size: Size of the array
 *
 * @value: Value to search
 *
 * Return: First index where value is located or -1 for NULL array
 */

int linear_search(int *array, size_t size, int value)
{
	int index;

	index = 0;
	while (index < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
		{
			return (index);
		}
		index++;
	}
	return (-1);
}
