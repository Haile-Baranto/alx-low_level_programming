#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - pass int pointer and updates it pointing to 98
 * @n: arguement that helps to pass value
 */

void reset_to_98(int *n)
{
	int *ptr;

	ptr = n;
	*ptr = 98;
}
