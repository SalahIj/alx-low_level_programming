#include "hash_tables.h"

/**
 * hash_table_get - the function name
 * @ht: the first input
 * @key: the second input
 * Return: the result
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *N;
	unsigned long int k;
	unsigned char *one;

	if (!ht || !key)
		return (NULL);

	one = (unsigned char *)key;
	k = key_index(one, (*ht).size);
	if (!ht->array[k])
		return (NULL);
	if (!strcmp((*ht).array[k]->key, key))
		return (ht->array[k]->value);

	for (N = ht->array[k]; N; N = N->next)
	{
		if (!strcmp(N->key, key))
			return (N->value);
	}
	return (NULL);
}
