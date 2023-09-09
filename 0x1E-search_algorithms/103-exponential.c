#include "search_algos.h"

/**
 * print_array - Prints an array of integers.
 * @array: A pointer to the first element of the array.
 * @left: The starting index of the array to print.
 * @right: The ending index of the array to print.
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
		else
			printf("\n");
	}
}

/**
 * binary_search_recursive - Searches for a value in a sorted array using
 *                           binary search recursively.
 * @array: A pointer to the first element of the array to search.
 * @left: The starting index of the array to search.
 * @right: The ending index of the array to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 */
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	while (right >= left)
	{
		print_array(array, left, right);

		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array using
 *                      exponential search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound, left, right;

	if (array == NULL)
		return (-1);

	if (size == 0)
		return (-1);

	bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", bound / 2,
	       (bound < size) ? bound : size - 1);

	left = bound / 2;
	right = (bound < size) ? bound : size - 1;

	return (binary_search_recursive(array, left, right, value));
}
