#include "search_algos.h"

/**
 * jump_list - the function name
 * @list: the first input
 * @size: the second input
 * @value: the third input
 * Return: the result
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, i;
	listint_t *current, *prev;

	if (list == NULL || size == 0)
		return (NULL);

	step = sqrt(size);
	for (current = list; current->n < value && current->next;)
	{
		prev = current;
		for (i = 0; current->next && i < step; i++)
			current = current->next;
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev->index,
	       current->index);

	for (current = prev; current->n < value;)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->next)
			current = current->next;
		else
			return (NULL);
	}
	if (current->n == value)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		return (current);
	}
	return (NULL);
}
