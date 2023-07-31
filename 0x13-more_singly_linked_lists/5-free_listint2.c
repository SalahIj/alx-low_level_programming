#include "lists.h"

/**
 * free_listint2 - freeing memory
 * @head: the input of the function.
 */

void free_listint2(listint_t **head)
{

	if (head != NULL)
	{
		if (*head != NULL)
		{
			while ((*head)->next)
			{
				free(*head);
				(*head) = (*head)->next;
			}
			free(*head);
			*head = NULL;
		}
	}
}
