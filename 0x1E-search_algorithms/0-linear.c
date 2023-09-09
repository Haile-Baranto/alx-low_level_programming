#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using linear search.
 *
 * @array: Pointer to the first element of the array.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is found, return the index where it's located.
 *         If the value is not found, return -1.
 */
int linear_search(int *array, size_t size, int value)
{
	int index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < (int)size; index++)
	{
		printf("Value checked array[%u] = [%d]\n", index, array[index]);
		if (value == array[index])
			return (index);
	}
	return (-1);
}
