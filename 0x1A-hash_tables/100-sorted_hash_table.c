#include "hash_tables.h"

/**
 * shash_table_create - the function name
 * @size: the input of the function
 * Return: the result
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int k = 0;
	shash_table_t *Sh;

	Sh = malloc(sizeof(shash_table_t))
	if (!Sh)
		return (NULL);
	(*Sh).size = size;
	(*Sh).stail = NULL;
	(*Sh).shead = NULL;
	(*Sh).array = malloc(sizeof(shash_node_t *) * size);
	if (!(*Sh).array)
	{
		free(Sh);
		return (NULL);
	}
	while (k < size)
	{
		(*Sh).array[k] = NULL;
		k++;
	}
	return (Sh);
}

/**
 * Sorted_List - the function name
 * @tab: the first input
 * @N: the second input
 */
void Sorted_List(shash_table_t *tab, shash_node_t *N)
{
	shash_node_t *node;

	if (!(*tab).shead && !(*tab).stail)
	{
		(*tab).shead = (*tab).stail = N;
		return;
	}

	if (strcmp((*N).key, (*tab).shead->key) < 0)
	{
		(*N).snext = (*tab).shead;
		(*tab).shead->sprev = N;
		(*tab).shead = N;
		return;
	}

	for (node = (*tab).shead; node; node = node->snext)
	{
		if (node->snext == NULL)
		{
			node->snext = N;
			(*N).sprev = node;
			(*tab).stail = N;
			return;
		}
		if (strcmp((*N).key, (*node).snext->key) < 0)
		{
			(*N).snext = (*node).snext;
			(*N).sprev = node;
			(*node).snext->sprev = N;
			(*node).snext = N;
			return;
		}
	}
}

/**
 * Creating_Sh_Nodes - the function name
 * @cle: the first input
 * @valeur: the second input
 * Return: the result
 */
shash_node_t *Creating_Sh_Nodes(const char *cle, const char *valeur)
{
	shash_node_t *SH;

	SH = malloc(sizeof(shash_node_t))
	if (!SH)
		return (NULL);
	(*SH).key = strdup(cle);
	if (!(*SH).key)
	{
		free(SH);
		return (NULL);
	}
	(*SH).value = strdup(valeur);
	if (!(*SH).value)
	{
		free((*SH).key);
		free(SH);
		return (NULL);
	}
	(*SH).snext = NULL;
	(*SH).sprev = NULL;
	return (SH);
}

/**
 * shash_table_set - the function name
 * @ht: the first input
 * @key: the second input
 * @value: the third input
 * Return: the result
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *SH, *TMP;
	unsigned long int k;
	size_t S;
	char *New;
	const unsigned char *tem;

	if (!ht || !ht->array || !ht->size || !key || !value)
		return (0);

	S = strlen(key);
	if (S == 0)
		return (0);

	tem = (const unsigned char *)key;
	k = key_index(tem, (*ht).size);
	for (TMP = (*ht).array[k]; TMP != NULL; TMP = (*TMP).next)
	{
		if (strcmp((*TMP).key, key) == 0)
		{
			New = strdup(value);
			if (!New)
				return (0);
			free((*TMP).value);
			(*TMP).value = New;
			return (1);
		}
	}
	SH = Creating_Sh_Nodes(key, value);
	if (!SH)
		return (0);
	SH->next = (*ht).array[k];
	(*ht).array[k] = SH;
	Sorted_List(ht, SH);
	return (1);
}

/**
 * shash_table_get - the function name
 * @ht: the first input
 * @key: the second input
 * Return: the result
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *TMP;
	unsigned long int k;
	size_t S;
	const unsigned char *tem;

	if (!ht || !(*ht).size || !(*ht).array || !key)
		return (NULL);

	S = strlen(key);
	if (S == 0)
		return (NULL);

	tem = (const unsigned char *)key;
	k = key_index(tem, (*ht).size);
	for (TMP = (*ht).array[k]; TMP; TMP = (*TMP).next)
	{
		if (strcmp((*TMP).key, key) == 0)
			return ((*TMP).value);
	}
	return (NULL);
}

/**
 * shash_table_print - the function name
 * @ht: the input of the function
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *TMP;
	int F = 0;

	if (!ht || !(*ht).array)
		return;
	printf("{");
	for (TMP = (*ht).shead; TMP; TMP = (*TMP).snext)
	{
		if (F == 1)
			printf(", ");
		printf("'%s': '%s'", (*TMP).key, (*TMP).value);
		F = 1;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - the function name
 * @ht: the input of the function
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *TMP;
	int F = 0;

	if (!ht || !(*ht).array)
		return;
	printf("{");
	for (TMP = ht->stail; TMP; TMP = (*TMP).sprev)
	{
		if (F == 1)
			printf(", ");
		printf("'%s': '%s'", (*TMP).key, (*TMP).value);
		F = 1;
	}
	printf("}\n");
}

/**
 * shash_table_delete - the function name
 * @ht: the input of the function
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *NEX;
	unsigned long int k = 0;

	if (!ht || !(*ht).size || !(*ht).array)
		return;
	while (k < (*ht).size)
	{
		for (; (*ht).array[k]; (*ht).array[k] = NEX)
		{
			NEX = (*ht).array[k]->next;
			free((*ht).array[k]->key);
			free((*ht).array[k]->value);
			free((*ht).array[k]);
		}
		k++;
	}
	free((*ht).array);
	(*ht).array = NULL;
	(*ht).shead = (*ht).stail = NULL;
	(*ht).size = 0;
	free(ht);
}
