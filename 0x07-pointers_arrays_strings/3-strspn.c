#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * Return: the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 * @s: pinter to string s
 * @accept: char array to check bytes with
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int c;

	i = 0;
	c = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (c);
}
