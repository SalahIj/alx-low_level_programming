#include "lists.h"

/**
 * get_dnodeint_at_index - the function name.
 * @head: the first input.
 * @index: the second input.
 * Return: the result.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j = 0;
	dlistint_t *tp;

	if (head == NULL)
		return (NULL);
	tp = head;
	while (tp)
	{
		tp = tp->next;
		j++;
		if (j == index)
			break;
	}
	return (tp);
}
