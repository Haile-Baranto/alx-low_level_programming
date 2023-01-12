#include "main.h"

/**
 * _realloc - eallocates a memory block using malloc and free
 * @ptr: Pointer to the old memory space
 * @old_size: The size of the old memory space in bytes
 * @new_size: The size  of the new memory space in bytes
 *
 * Return: Pointer to the new memory space
 * Description: If new_size > old_size, the “added” memory
 * should not be initialized
 * If new_size == old_size do not do anything and return ptr
 * If ptr is NULL, then the call is equivalent to malloc(new_size),
 * for all values of old_size and new_size
 * If new_size is equal to zero, and ptr is not NULL, then the call
 * is equivalent to free(ptr). Return NULL
 * Don’t forget to free ptr when it makes sense
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;
	unsigned int count;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	newptr = malloc(new_size);
	if (newptr == NULL)
		return (NULL);
	for (count = 0; count < new_size && count < old_size; count++)
		*((unsigned char *)newptr + count) = *((unsigned char *)ptr + count);
	return (newptr);
}
