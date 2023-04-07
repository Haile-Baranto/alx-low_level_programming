#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints the key/value pairs of a hash table.
 * @ht: Pointer to the hash table to be printed.
 *
 * Description: The function prints the key/value pairs of a hash table
 *              in the order they appear in the hash table array.
 */
void hash_table_print(const hash_table_t *ht)
{
	const hash_node_t *node;
	unsigned char comma_flag = 0;
	unsigned long int i;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma_flag)
				printf(", ");

			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;

				if (node != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
