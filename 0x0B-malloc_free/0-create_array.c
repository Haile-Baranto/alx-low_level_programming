#include "main.h"

/**
 * create_array -  creates an array of chars, and
 * initializes it with a specific char.
 * @size: size of arrary to be created
 * @c: charachter value to initialize dynamically created memory address
 * Return: char pointer to dynamically allocated memory else Null if error
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int counter;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	for (counter = 0; counter < size; counter++)
	{
		ptr[counter] = c;
	}
	return (ptr);
}
