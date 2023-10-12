#include "lists.h"

/**
 * add_dnodeint - The name of the function
 * @head: the first input.
 * @n: the second input.
 * Return: the result.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->prev = NULL;
	tmp->n = n;
	if (*head)
	{
		tmp->next = *head;
		(*head)->prev = tmp;
		*head = tmp;
	}
	else
	{
		tmp->next = NULL;
		*head = tmp;
	}
	return (*head);
}
