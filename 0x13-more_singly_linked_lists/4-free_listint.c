#include "lists.h"

/**
 * free_listint - freeing memory
 * @head: the input of the function.
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	if (head != NULL)
	{
		for (node = head; node->next; node = node->next)
		{
			free(node);
		}
		free(node);
	}
}
