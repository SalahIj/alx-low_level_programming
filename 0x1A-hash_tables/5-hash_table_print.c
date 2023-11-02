#include "hash_tables.h"

/**
 * hash_table_print - the function name
 * @ht: the input of the function
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *Tmp;
	unsigned long int k = 0;
	int F = 0;

	if (!ht || !(*ht).array)
		return;
	printf("{");
	while (k < (*ht).size)
	{
		for (Tmp = (*ht).array[k]; Tmp; Tmp = Tmp->next)
		{
			if (F == 1)
				printf(", ");
			printf("'%s': '%s'", (*Tmp).key, (*Tmp).value);
			F = 1;
		}
		k++;
	}
	printf("}\n");
}
