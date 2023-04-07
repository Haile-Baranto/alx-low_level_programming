#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with
 *                  a key in a hash table.
 *
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;
	/* Check for null inputs */
	if (!ht || !key || !*key)
		return (NULL);
	/* Calculate the index of the key in the array */
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	/*Traverse the linked list at that index until the key is found */
	for (node = ht->array[index]; node; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
	}
	/* Key not found */
	return (NULL);
}
