#include "lists.h"

/**
 * free_dlistint - The function name
 * @head: The input of the function.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tp, *tmp;

	tp = head;
	while (tp)
	{
		tmp = tp->next;
		free(tp);
		tp = tmp;
	}
}
