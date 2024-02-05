#include "search_algos.h"

/**
 * linear_search - the function name
 * @array: first input
 * @size: second input
 * @value: third input
 * Return: the result
*/
int linear_search(int *array, size_t size, int value)
{
	int i;

	i = 0;
	while (i < (int)size)
	{
		printf("Value checked %d = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
