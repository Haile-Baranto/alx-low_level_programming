#include "search_algos.h"

/**
 * advanced_binary_recursive - searches for a value in a sorted array
 * using binary search recursively
 *
 * @array: input array
 * @left: left index of the subarray
 * @right: right index of the subarray
 * @value: value to search for
 *
 * Return: index of the value if found, otherwise -1
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	if (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		mid = left + (right - left) / 2;

		if (array[mid] == value)
		{
			if (mid == left || array[mid - 1] != value)
				return (mid);
			return (advanced_binary_recursive(array, left, mid, value));
		}
		else if (array[mid] > value)
			return (advanced_binary_recursive(array, left, mid, value));
		else
			return (advanced_binary_recursive(array, mid + 1, right, value));
	}

	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array
 * using advanced binary search
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of the value if found, otherwise -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
