#include <stdio.h>

/**
 * print_diagsums - prints the diagonal of an array
 * @a: pointer to the 2D array whose diagnal is to be printed
 * @size: is the dimmesnsion of the square matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int main_diagonal;
	int off_diagonal;

	main_diagonal = 0;
	for (i = 0; i < size * size; i++)
	{
		if (i % (size + 1) == 0)
			main_diagonal += a[i];
		if (i % (size - 1) == 0 && i != (size * size - 1) && i != 0)
			off_diagonal += a[i];
	}
	printf("%d, %d\n", main_diagonal, off_diagonal);
}
