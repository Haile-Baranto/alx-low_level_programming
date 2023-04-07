#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 *
 * @ht: The hash table to add the element to.
 * @key: The key of the element to add and cannot be empty.
 * @value: The value associated with the key.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *curr;
	hash_node_t *new_node;
	char *value_copy;
	unsigned int index;

	/* Check if the hash table, key or value is empty */
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	/* Copy the value and get the index for the key */
	value_copy = strdup(value);
	index = key_index((const unsigned char *)key, ht->size);

	/* Traverse the linked list for the given index */
	curr = ht->array[index];
	while (curr != NULL)
	{
		/* Update the value if the key already exists */
		if (strcmp(curr->key, key) == 0)
		{
			free(curr->value);
			curr->value = value_copy;
			return (1);
		}
		curr = curr->next;
	}

	/* Create a new hash node if the key doesn't exist */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_copy);
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
