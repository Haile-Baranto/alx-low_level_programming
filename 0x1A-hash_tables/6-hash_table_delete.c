#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to the hash table to delete.
 *
 * Description: This function frees all memory allocated for the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *current_node, *temp_node;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			current_node = ht->array[i];
			while (current_node != NULL)
			{
				temp_node = current_node->next;
				free(current_node->key);
				free(current_node->value);
				free(current_node);
				current_node = temp_node;
			}
		}
	}
	free(head->array);
	free(head);
}
