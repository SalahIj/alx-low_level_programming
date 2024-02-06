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
	int i = 0, low = 0, high = (int)size - 1;

	if (array)
	{
		while ((value >= array[low]))
		{
			i = low + (((high - low) /
						(array[high] - array[low])) * (value - array[low]));
			if (i > size)
			{
				printf("Value checked array[%lu] is out of range\n", i);
				break;
			}

			printf("Value checked array[%lu] = [%d]\n", i, array[i]);

			if (array[i] < value)
				low = i + 1;
			else if (array[i] > value)
				high = i - 1;
			else
				return (i);
		}
	}
	return (-1);
}
