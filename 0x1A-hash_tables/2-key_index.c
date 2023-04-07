/*File name:2-key_index.c */
/*  Auth: Haile Baranto */

#include "hash_tables.h"
/**
 * key_index - Returns the index of a key
 * @key: is the key of the hash table
 * @size: is the size of hash table
 * Return: the index at which the key/value pair
 * should be stored in the array of the hash table
 * Description:This function should use the hash_djb2
 * function that you wrote earlier
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
