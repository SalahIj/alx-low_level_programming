#include "search_algos.h"

/**
 * linear_skip - the function name
 * @list: the first input
 * @value: the third input
 * Return: the result
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *cat, *prev;

	if (list == NULL)
		return (NULL);

	for (cat = list; cat->next && cat->n < value;)
	{
		prev = cat;
		if (cat->express)
			cat = cat->express;
		else
		{
			for (; cat->next; cat = cat->next)
				;
		}
		if (cat->next)
			printf("Value checked at index [%lu] = [%i]\n", cat->index, cat->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev->index,
	       cat->index);

	for (cat = prev; cat && cat->n < value;)
	{
		printf("Value checked at index [%lu] = [%i]\n", cat->index, cat->n);
		if (cat->next)
			cat = cat->next;
		else
			return (NULL);
	}

	if (cat && cat->n == value)
	{
		printf("Value checked at index [%lu] = [%i]\n", cat->index, cat->n);
		return (cat);
	}

	return (NULL);
}
