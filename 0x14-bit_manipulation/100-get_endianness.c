#include "main.h"

/**
 *  * get_endianness - getting endianness.
 *   * Return: the result.
    */

int get_endianness(void)
{
	unsigned long int p;
	char *srt;

	p = 1;
	srt = ((char *)&p);

	return (*srt);
}
