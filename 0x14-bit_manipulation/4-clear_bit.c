#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @index: index starting from zero where bit will be set to 0
 * @n:  pointer to the number whose bit to be set to 0
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	unsigned long int pow;
	unsigned long int tmp;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	tmp = (*n >> index) & 1;
	for (i = index, pow = 1; i > 0; i--, pow *= 2)
		;
	if (tmp)
		*n -= pow;
	return (1);
}
