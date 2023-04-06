/* File name: 1-djb2.c*/
/* auth: Haile Baranto*/

#include "hash_tables.h"

/**
 * hash_djb2 - Implementing the djb2 algorithm.
 * @str: pointer to to string of charachters
 * Return: the hash value of str
*/

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_value;
	int index;

	hash_value = 5381;
	for (index = 0; str[index] != '\0'; index++)
	{
		hash_value = ((hash_value << 5) + hash_value) + str[index];
	}
	return (hash_value);
}
