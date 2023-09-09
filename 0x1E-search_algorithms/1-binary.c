#include "search_algos.h"

/**
 * recursive_search - Recursive binary search algorithm for sorted arrays.
 *
 * @array: Pointer to the first element of the sorted array.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is found, return the index where it's located.
 *         If the value is not found or the array is NULL, return -1.
 */
static int recursive_search(int *array, size_t size, int value)
{
	size_t middle;
	size_t i;
	int sub_result;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	middle = size / 2;
	if (middle && size % 2 == 0)
		middle--;

	if (value == array[middle])
		return ((int)middle);

	if (value < array[middle])
		return (recursive_search(array, middle, value));

	middle++;

	sub_result = recursive_search(array + middle, size - middle, value);
	return ((sub_result != -1) ? ((size_t)sub_result + middle) : (size_t)-1);
}

/**
 * binary_search - Binary search algorithm for sorted arrays.
 *
 * @array: Pointer to the first element of the sorted array.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is found, return the index where it's located.
 *         If the value is not found or the array is NULL, return -1.
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
