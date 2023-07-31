#include "lists.h"

/**
 * pop_listint - popping
 * @head: the input of the function.
 * Return: the result.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int p;

	if (*head == NULL)
		return (0);

	tmp = *head;
	p = (*head)->n;
	(*head) = (*head)->next;
	free(tmp);
	return (p);
}
