#include "main.h"

/**
 * reverse_array - reverses elements of an array
 * @a: a pointer to the array to be reverse ordered
 * @n: the size of the array to be reverse ordered
 *Return:  void
 */

void reverse_array(int *a, int n)
{
	int index;
	int temp;

	index = 0;
	temp = 0;
	for (index = 0; index < n / 2; index++)
	{
		temp = *(a + index);
		*(a + index) = *(a + n - index - 1);
		*(a + n - index - 1) = temp;
	}
}
