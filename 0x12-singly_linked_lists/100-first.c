#include "lists.h"

void printf_this_message_first(void) __attribute__ ((constructor));

/**
 ** printf_this_message_first -  ececuting first.
 */

void printf_this_message_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
