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
	int step = sqrt(size), i;

	if (!array)
		return (-1);

	for (i = 0; i < (int)size && array[i] < value; i += step)
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

	i -= step;
	printf("Value found between indexes [%d] and [%d]\n", i, i + step);
	while (i <= (i + step) && i < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
