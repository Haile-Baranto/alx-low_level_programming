#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array using jump search.
 *
 * @array: Pointer to the first element of the sorted array.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is found, return the index where it's located.
 *         If the value is not found or the array is NULL, return -1.
 */
int jump_search(int *array, size_t size, int value)
{
	int current_index, block_size, step_count, previous_index;

	if (array == NULL || size == 0)
		return (-1);

	block_size = (int)sqrt((double)size);
	step_count = 0;
	previous_index = current_index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", current_index,
				array[current_index]);

		if (array[current_index] == value)
			return (current_index);

		step_count++;
		previous_index = current_index;
		current_index = step_count * block_size;
	} while (current_index < (int)size && array[current_index] < value);

	printf("Value found between indexes [%d] and [%d]\n",
		previous_index, current_index);
	for (; previous_index <= current_index && previous_index <
		(int)size; previous_index++)
	{
		printf("Value checked array[%d] = [%d]\n", previous_index,
			array[previous_index]);
		if (array[previous_index] == value)
			return (previous_index);
	}

	return (-1);
}
