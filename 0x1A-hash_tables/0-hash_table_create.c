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
	hash_table_t *ptr;

	ptr = malloc(sizeof(size));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
