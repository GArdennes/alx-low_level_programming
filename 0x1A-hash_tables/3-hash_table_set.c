#include "hash_tables.h"

/**
 * hash_table_set - function to insert a value and key pair into table
 * @ht: hash table
 * @key: hash table key
 * @value: hash table value
 * Return: On success return 1 else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *node = ht->array[index];

	if (key == NULL || ht == NULL || key[0] == '\0')
		return (0);

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	node = malloc(sizeof(hash_node_t));
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
