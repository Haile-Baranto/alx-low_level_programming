#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b:  Is pointing to a string of 0 and 1 chars
 * Return: if successful returns converted decimal number.
 * if b is null or contain char other than 0 or 1 it return 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal, pow;
	int i;

	if (b == NULL)
		return (0);
	/*check whether there is invalid char on the string (other than 0 or 1)*/
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	for (decimal = 0, i--, pow = 1; i >= 0; i--, pow *= 2)
	{
		if (b[i] == '1')
			decimal += pow;
	}
	return (decimal);
}
