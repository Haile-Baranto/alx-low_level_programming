#include "main.h"

/**
 * _strdup - return a pointer to newly allocated memory space and initialize
 * it with string passed to it.
 * @str: pointer to string and to where it points will intialize malloc created
 * memory address
 * Return: if str is NULL or there is insufficient spaceit return NULL.
 * But in success it returns pointer to the newly created copy  of "str"
 * Description - memory shpould be created with malloc so that it will
 * be freed with "free" library function.
 */

char *_strdup(char *str)
{
	char *newPointer;
	int size;
	int counter;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
	{
		;
	}
	newPointer = malloc(size * sizeof(*str) + 1);
	if (newPointer == NULL)
		return (NULL);
	for (counter = 0; counter < size; counter++)
	{
		newPointer[counter] = str[counter];
	}
	return (newPointer);
}
