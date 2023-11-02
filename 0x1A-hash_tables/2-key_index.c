#include "hash_tables.h"

/**
 * key_index - the function name
 * @key: the firtst input
 * @size: the secnd input
 * Return: the result
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
