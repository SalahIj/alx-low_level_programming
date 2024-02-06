#include "search_algos.h"

/**
 * interpolation_search - the function name
 * @array: the first input
 * @size: the second input
 * @value: the third input
 * Return: the result
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos = 0, low, high = size - 1;

	if (array)
	{
		for (low = 0; value >= array[low];)
		{
			pos = low + (((double)(high - low) /
						(array[high] - array[low])) * (value - array[low]));
			if (pos > size)
			{
				printf("Value checked array[%lu] is out of range\n", pos);
				break;
			}
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			if (array[pos] < value)
				low = pos + 1;
			else if (array[pos] > value)
				high = pos - 1;
			else
				return (pos);
		}
	}
	return (-1);
}
