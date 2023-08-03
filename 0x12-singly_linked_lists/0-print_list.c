#include "lists.h"

/**
<<<<<<< HEAD
 * print_list - printing
 * @h: the input of the function.
 * Return: the result.
*/
=======
 *  * _strlen - calculiting.
 *   * @s: the input.
 *    * Return: the result.
 */

int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);

	while (*(s + i))
		i++;
	return (i);
}

/**
 *  * print_list - printing
 *   * @h: the input of the function.
 *    * Return: the result.
 */
>>>>>>> 64acf2af1199d03395b48b7bcadc29e705080b2d

size_t print_list(const list_t *h)
{
	const list_t *node;
	int n = 0;

<<<<<<< HEAD
=======
	if (h == NULL)
		return (0);

>>>>>>> 64acf2af1199d03395b48b7bcadc29e705080b2d
	node = h;
	while (node != NULL)
	{
		if (node->str == NULL)
<<<<<<< HEAD
			printf("[0]%s", "(nil)");
		else
			printf("[%d] %s", node->len, node->str);
=======
			printf("[0] %s", "(nil)");
		else
			printf("[%d] %s", _strlen(node->str), node->str);
>>>>>>> 64acf2af1199d03395b48b7bcadc29e705080b2d

		node = node->next;
		n++;
		printf("\n");
	}
	return (n);
}
