#include "main.h"

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 * @s: pointer to the string whose substring will be returned
 * @accept: pointer to set of string we will use to compare
 * the existence of byte at s.
 * Return: pointer to string
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	j = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
