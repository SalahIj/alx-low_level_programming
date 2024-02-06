#include "search_algos.h"

/**
 * linear_skip - the function
 * @list: the first input
 * @value: the second input
 * Return: the result
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *prev;

	if (list == NULL)
		return (NULL);

	for (current = list; current->next && current->n < value;)
	{
		prev = current;
		if (current->express)
			current = current->express;
		else
		{
			while (current->next)
				current = current->next;
		}
		if (current->next)
			printf("Value checked at index [%lu] = [%i]\n", current->index, current->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev->index,
	       current->index);
	for (current = prev; current && current->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n", current->index, current->n);
		if (current->next)
			current = current->next;
		else
			return (NULL);
	}
	if (current && current->n == value)
	{
		printf("Value checked at index [%lu] = [%i]\n", current->index, current->n);
		return (current);
	}
	return (NULL);
}
