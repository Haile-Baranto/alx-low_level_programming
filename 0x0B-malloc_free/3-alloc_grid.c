#include "main.h"

/**
 * alloc_grid - return pointer to 2D array of integers
 * @height: number of array in the 2d array
 * @width: the size of each array elements of the 2d array
 * Return: return pointer to 2d array if successful. return NULL
 * if failer. also return NULL if width or height  is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int c1;
	int c2;

	if (height <= 0 || width <= 0)
		return (NULL);
	
	ptr = malloc(height * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);

	for (c1 = 0; c1 < height; c1++)
	{
		ptr[c1] = malloc(width * sizeof(**ptr));
		if (ptr[c1] == NULL)
		{
			for (c1--; c1 >= 0; c1--)
				free(ptr[c1]);
			free(ptr);
			return (NULL);
		}
		for (c2 = 0; c2 < width; c2++)
			ptr[c1][c2] = 0;
	}

	return (ptr);
}
