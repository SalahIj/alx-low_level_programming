#include "lists.h"

/**
 * pop_listint - popping
 * @head: the input of the function.
 * Return: the result.
 */

int pop_listint(listint_t **head)
{
	int p;

	if (head == NULL)
		return (0);

	p = (*head)->n;
	free(*head);
	(*head) = (*head)->next;
	return (p);
}
