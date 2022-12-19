#include <stdio.h>

/**
 * print_array - prints n elements of an array each in new line
 * void print_array(int *a, int n);
 * @a: pointer to the values to be printed
 * @n: the size of the array to be printed
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		if (index < n - 1)
			printf("%d, ", a[index]);
		else
			printf("%d\n", a[index]);
	}
}
