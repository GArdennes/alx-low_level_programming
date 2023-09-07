#include "hash_tables.h"

/**
 * hash_table_print - print the hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			printf("%s: %s\n", node->key, node->value);
			node = node->next;
		}
	}
}
