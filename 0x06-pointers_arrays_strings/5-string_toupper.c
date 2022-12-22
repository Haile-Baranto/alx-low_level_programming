#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * Return: function that points to a char
 * @c: points to the charachter to be converted
 */

char *string_toupper(char *c)
{
	int index;

	index =  0;

	while (c[index] != '\0')
	{
		if (c[index] < 123 && c[index] > 96)
		{
			c[index] -= 32;
		}
		index++;
	}
	return (c);
}
