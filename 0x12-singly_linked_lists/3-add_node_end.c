#include "lists.h"

/**
 *  * add_node_end - adding in the end.
 *   * @head: the first input.
 *    * @str: the second input.
 *     * Return: the result.
      */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current_end, *node;

	current_end = malloc(sizeof(list_t));
	if (!current_end || head == NULL)
		return (NULL);

	if (str != NULL)
	{
		(*current_end).str = strdup(str);
		if ((*current_end).str == NULL)
		{
			free(current_end);
			return (NULL);
		}
		(*current_end).len = strlen(str);
		current_end->next = NULL;
	}
	if (*head == NULL)
		*head = current_end;
	else
	{
		node = *head;
		while (node->next != NULL)
			node = node->next;

		node->next = current_end;
	}
	return (current_end);
}
