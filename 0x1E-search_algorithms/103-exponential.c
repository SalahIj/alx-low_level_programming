#include "search_algos.h"

/**
 * Binary_searching - the function name
 * @array: the first input
 * @size: the second input
 * @value: the third input
 * @start: the firth input
 * Return: the result
 */
int Binary_searching(int *array, size_t size, int value, size_t begin)
{
	size_t i = 0, left = begin, right = size - 1;

	if (array)
	{
		while (left <= right)
		{
			printf("Searching in array: ");
			for (i = left; i <= right; i++)
			{
				if (i != left)
					printf(", ");
				printf("%d", array[i]);
			}
			printf("\n");
			i = (left + right) / 2;
			if (value > array[i])
				left = i + 1;
			else if (value < array[i])
				right = i - 1;
			else
				return (i);
		}
	}
	return (-1);
}

/**
 * exponential_search - the function name
 * @array: he first input
 * @size: the second input
 * @value: the third input
 * Return: the result
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 1; i < size && array[i] < value; i *= 2)
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (i > size - 1)
			i = size;
		else
			i = i + 1;
		printf("Value found between indexes [%lu] and [%lu]\n", i / 2, i - 1);
		return (Binary_searching(array, i, value, i / 2));
	}

	return (-1);
}
