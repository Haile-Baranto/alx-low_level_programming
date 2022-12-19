#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the location referenced by a and b
 * @a: locaton of variable a
 * @b: location of variable b
 */

void swap_int(int *a, int *b)
{
	/*
	 * temporary temporarilly store location of a
	 */
	int temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}
