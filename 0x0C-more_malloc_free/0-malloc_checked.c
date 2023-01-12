#include "main.h"
/**
 * malloc_checked -allocate memory using malloc
 * @b: Number of bytes of memory to be allocated
 * Return: pointer to malloc allocated memory or if failer exit with 98 code
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
