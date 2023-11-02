#include "hash_tables.h"

/**
 * hash_table_delete - the function name
 * @ht: the input of the function
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *N;
	unsigned long int k;

	for (k = 0; k < (*ht).size; k++)
	{
		for (; (*ht).array[k]; (*ht).array[k] = N)
		{
			N = (*ht).array[k]->next;
			free((*ht).array[k]->key);
			free((*ht).array[k]->value);
			free((*ht).array[k]);
		}
	}
	free((*ht).array);
	free(ht);
}
