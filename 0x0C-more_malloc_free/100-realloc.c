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
	char *newptr;
	char *temp;
	unsigned int count;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);
		return (newptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	newptr = malloc(new_size);
	if (newptr == NULL)
		return (NULL);
	temp = ptr;
	for (count = 0; count < old_size; count++)
		newptr[count] = temp[count];
	free(ptr);
	return (newptr);
}
