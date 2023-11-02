#include "hash_tables.h"

/**
 * Creat_hash_case - the function name
 * @cle: the fisrt input
 * @value: the second input
 * Return: the result
 */
hash_node_t *Creat_hash_case(const char *cle, const char *valeur)
{
	hash_node_t *N;

	N = malloc(sizeof(hash_node_t));
	if (!N)
		return (NULL);
	N->key = strdup(cle);
	if (!(*N).key)
	{
		free(N);
		return (NULL);
	}
	N->value = strdup(valeur);
	if (!(*N).value)
	{
		free((*N).key);
		free(N);
		return (NULL);
	}
	(*N).next = NULL;
	return (N);
}

/**
 * hash_table_set - the function name
 * @ht: the first input
 * @key: the second input
 * @value: the third input
 * Return: the result
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *Ht, *Tmp;
	unsigned int k;
	char *New;
	const unsigned char *In;

	if (!ht || !(*ht).array || !(*ht).size || !key || !value || !strlen(key))
		return (0);
	In = (const unsigned char *)key;
	k = key_index(In, ht->size);
	for (Tmp = ht->array[k]; Tmp; Tmp = Tmp->next)
	{
		if (!strcmp((*Tmp).key, key))
		{
			New = strdup(value);
			if (!New)
				return (0);
			free((*Tmp).value);
			(*Tmp).value = New;
			return (1);
		}
	}
	Ht = Creat_hash_case(key, value);
	if (!Ht)
		return (0);
	(*Ht).next = (*ht).array[k];
	(*ht).array[k] = Ht;
	return (1);
}


