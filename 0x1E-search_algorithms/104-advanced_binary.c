#include "search_algos.h"

/**
 * Binary_Recurr - the function name
 * @array: the first input
 * @first: the second input
 * @last: the third input
 * @value: the firth input
 * Return: the result
 */
int Binary_Recurr(int *array, size_t first, size_t last, int value)
{
	size_t i = 0;

	if (array)
	{
		if (first <= last)
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
			if (array[first] == value)
				return (first);

			if (value == array[i] && array[i - 1] != value)
				return (i);
			if (value > array[i])
				return (Binary_Recurr(array, i + 1, last, value));
			if (value <= array[i])
				return (Binary_Recurr(array, first, i, value));
		}
	}
	return (-1);
}

/**
 * advanced_binary - the function name
 * @array: the first input
 * @size: the second input
 * @value: the third input
 * Return: the result
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array)
		return (Binary_Recurr(array, 0, size - 1, value));
	return (-1);
}
