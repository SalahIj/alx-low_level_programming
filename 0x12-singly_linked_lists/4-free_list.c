#include "lists.h"

/**
 *  * free_list - free.
 *   * @head: the input.
    */

void free_list(list_t *head)
{
	list_t *current, *NEXT;

	current = head;
	while (current != NULL)
	{
		NEXT = current->next;
		free(current->str);
		free(current);
		current = NEXT;
	}
}
