#include "function_pointers.h"

/**
 * array_iterator -  executes a function given as a
 * parameter on each element of an array
 * @array: An array.
 * @size: The size of array.
 * @action: A pointer to the function to be executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
