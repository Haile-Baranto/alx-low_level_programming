#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: pointer to decimal number whose bit at index will be set
 * @index: index position to change, starting from 0
 * Return: 1 if it worked, -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int pow;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	for (pow = 1; index > 0; index--, pow *= 2)
		;
	*n += pow;
	return (1);
}
