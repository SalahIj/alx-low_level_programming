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
	size_t jmp, i;
	listint_t *cur, *prev;

	if (list == NULL || size == 0)
		return (NULL);

	jmp = sqrt(size);
	for (cur = list; cur->n < value && cur->next;)
	{
		prev = cur;
		for (i = 0; cur->next && i < jmp; i++)
			cur = cur->next;
		printf("Value checked at index [%lu] = [%d]\n", cur->index, cur->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev->index,
	       cur->index);

	for (cur = prev; cur->n < value;)
	{
		printf("Value checked at index [%lu] = [%d]\n", cur->index, cur->n);
		if (cur->next)
			cur = cur->next;
		else
			return (NULL);
	}
	if (cur->n == value)
	{
		printf("Value checked at index [%lu] = [%d]\n", cur->index, cur->n);
		return (cur);
	}
	return (NULL);
}
