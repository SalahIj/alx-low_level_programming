#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - printing numbers in an array.
 * @array: the first input.
 * @size: the second input.
 * @action: the third input.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
