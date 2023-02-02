#include "main.h"

/**
 * get_endianness -  checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int i;

	i = 1;
	/**
	 * used to check if 1 is stored at lower address
	 * if so it is big indian memory structure
	 * otherwise little indian memory structure
	 */
	if ((*(char *)&i) == 1)
		return (1);
	else
		return (0);
}
