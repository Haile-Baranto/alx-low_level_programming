#include "main.h"

/**
 * flip_bits - Determine the number of bits to be fliped
 * to change one number to another
 * @n: The number to be fliped
 * @m: second number to convert to
 * Return: No bits fliped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	int i = sizeof(unsigned long int) * 8;
	int count = 0;

	xor = n ^ m;
	for (; i > 0; i--)
	{
		if ((xor >> i) & 01)
			count++;
	}
	return (count);
}
