#include "lists.h"

/**
 *  * add_node - adding nodes
 *   * @head: the first input
 *    * @str: the second input
 *     * Return: the resutl.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *current;

	current = malloc(sizeof(list_t));
	if (current == NULL || head == NULL)
		return (NULL);

	if (str != NULL)
	{
		current->str = strdup(str);
		current->len = strlen(current->str);
		if (current->str == NULL)
		{
			free(current);
			return (NULL);
		}
		current->next = *head;
		*head = current;
	}
	return (current);
}
