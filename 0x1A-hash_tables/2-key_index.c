#include "hash_tables.h"

/**
 * key_index - function to generate hash code for key
 * @key: key from hash table
 * @size: size of hash table
 * Return: On success unsigned long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	if (!key || !size)
		return (0);

	i = hash_djb2(key);
	return (i % size);
}
