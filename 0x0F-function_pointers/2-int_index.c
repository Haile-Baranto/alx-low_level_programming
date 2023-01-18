#include "function_pointers.h"

/**
 * int_index - Func that searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp:  is a pointer to the function to be used to compare values
 * Return: index of first element that matches with `cmp`, or -1 if none found
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	count = 0;
	if (cmp == NULL || size < 1 || array == NULL)
		return (-1);

	while (count < size)
	{
		if (cmp(array[count]))
			return (count);
		count++;
	}

	return (-1);
}
