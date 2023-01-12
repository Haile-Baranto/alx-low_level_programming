#include "main.h"


/**
 * _calloc - Allocates memory and fills it with zero
 * @nmemb: Size in bytes of each element
 * @size: number of elements to allocate room for
 *
 * Return: Void pointer to the first adress in the newly allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned long int count;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (count = 0; count < nmemb * size; count++)
		*((unsigned char *)ptr + count) = 0;

	return (ptr);
}
