#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char c);

/**
<<<<<<< HEAD
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
=======
 *  * struct list_s - singly linked list
 *   * @str: string - (malloc'ed string)
 *    * @len: length of the string
 *     * @next: points to the next node
 *      *
 *       * Description: singly linked list node structure
>>>>>>> 64acf2af1199d03395b48b7bcadc29e705080b2d
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
<<<<<<< HEAD
=======
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void printf_this_message_first(void);
>>>>>>> 64acf2af1199d03395b48b7bcadc29e705080b2d

#endif
