/*file name: o-hash_table_create.c*/
/*auth: Haile Baranto*/

#include "hash_tables.h"
/**
 * hash_table_create - creates hash table
 * @size: size of the array to be created
 * Return: a pointer to the newly created hash table
 * Description: If something went wrong, your function
 * should return NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;
	/*creating memory space for hash_table_t node*/
	hash_table = malloc(sizeof(hash_table));
	if (hash_table == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	hash_table->array = malloc(size * sizeof(hash_table));
	if (!hash_table->array)
	{
		free(hash_table->array);
		return (NULL);
	}
	/*Intialize the array*/
	for (i = 0; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}
	hash_table->size = size;
	return (hash_table);
}
