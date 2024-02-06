#include "search_algos.h"

/**
 * ex_binary_search - the function name
 * @array: the first input
 * @size: the second input
 * @value: the third input
 * @start: the firth input
 * Return: the result
 */
int ex_binary_search(int *array, size_t size, int value, size_t start)
{
	size_t i = 0, first = start, last = size - 1;

	if (array)
	{
		while (first <= last)
		{
			printf("Searching in array: ");
			for (i = first; i <= last; i++)
			{
				if (i != first)
					printf(", ");
				printf("%d", array[i]);
			}
			printf("\n");
			i = (first + last) / 2;
			if (value > array[i])
				first = i + 1;
			else if (value < array[i])
				last = i - 1;
			else
				return (i);
		}
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in an array of integers
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located or -1 on failure or not found
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 1; array[i] < value && i < size; i *= 2)
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (i > size - 1)
			i = size;
		else
			i = i + 1;
		printf("Value found between indexes [%lu] and [%lu]\n", i / 2, i - 1);
		return (ex_binary_search(array, i, value, i / 2));
	}

	return (-1);
}
