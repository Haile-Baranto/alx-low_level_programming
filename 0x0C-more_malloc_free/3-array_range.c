#include "main.h"

/**
 * array_range -  Creates an array of integers in the range min - max.
 * @min: where the range starts
 * @max: the end of the range
 * Return: Pointer to first element of new array or NULL if fail or min <= max
 */


int *array_range(int min, int max)
{
	int *ptr;
	int count;

	if (max < min)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);

	for (count = 0; min <= max; count++, min++)
		ptr[count] = min;

	return (ptr);
}
