#include "hash_tables.h"

/**
 * hash_table_create - the function name
 * @size: the input
 * Return: the result
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int k = 0;
	hash_table_t *Ht;

	Ht = malloc(sizeof(hash_table_t));
	if (!Ht)
		return (NULL);
	(*Ht).size = size;
	(*Ht).array = malloc(size * sizeof(hash_table_t *));
	if (!(*Ht).array)
	{
		free(Ht);
		return (NULL);
	}
	while (k < size)
	{
		Ht->array[k] = NULL;
		k++;
	}
	return (Ht);
}
