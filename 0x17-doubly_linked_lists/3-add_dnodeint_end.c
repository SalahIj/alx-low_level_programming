#include "lists.h"

/**
 * add_dnodeint_end - The name of the function.
 * @head: The first input.
 * @n: The second input.
 * Return: The result.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *tp;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->next = NULL;
	tmp->n = n;

	if (*head)
	{
		for (tp = *head; tp->next; tp = tp->next)
			;
		tmp->prev = tp;
		tp->next = tmp;
	}
	else
	{
		tmp->prev = NULL;
		*head = tmp;
	}
	return (*head);
}
