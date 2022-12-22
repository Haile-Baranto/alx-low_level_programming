#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to the first string
 * @s2 pointer to the first string
 * Return: 1 if the first non maching charachetrs of string one is
 * in ascci greater than that of s2. 0 if they are equal and -1 if
 * s1 is greater
 * Description: using library function is not allowed
 */

int _strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	for (index = 0; *(s1 + index) != '\0' || *(s2 + index) != 0; index++)
	{
		if (*(s1 + index) != *(s2 + index))
			return (*(s1 + index) - *(s2 + index));
	}
	return (0);
}
