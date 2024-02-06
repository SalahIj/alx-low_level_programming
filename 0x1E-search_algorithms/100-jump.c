#include "search_algos.h"

/**
 * jump_search - The function name
 * @array: the first input
 * @size: The second input
 * @value: The third input
 * Return: Return the result
 */
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	int index = 0;

	if (!array)
		return (-1);

	while (index < (int)size && array[index] < value)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		index += step;
	}
	index -= step;
	printf("Value found between indexes [%d] and [%d]\n", index, index + step);
	while (index <= (index + step) && index < (int)size)
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
