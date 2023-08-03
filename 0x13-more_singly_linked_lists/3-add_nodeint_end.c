#include "lists.h"

/**
 * add_nodeint_end - adding in the end.
 * @head: the first input;
 * @n: the second input.
 * Return: the result.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *inter, *pass;

	if (head == NULL)
		return (NULL);

	inter = malloc(sizeof(listint_t));
	if (inter == NULL)
		return (NULL);

	inter->n = n;
	inter->next = NULL;

	if (*head == NULL)
		*head = inter;
	else
	{
		for (pass = *head; pass->next != NULL; pass = pass->next)
			;
		pass->next = inter;
	}
	return (inter);
}
