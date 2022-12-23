#include "main.h"

/**
 * leet - encode a string into 1337
 * @s: string
 * Return: encoded string `s`
 */

char *leet(char *s)
{
	int index;
	char *ptr;
	char char1[] = { 'A', 'E', 'O', 'T', 'L' };
	char char2[] = { 4, 3, 0, 7, 1 };

	ptr = s;
	index = 0;
	while (*s)
	{
		for (index = 0; index < 5; index++)
		{
			if (*s == char1[index] || *s == char1[index] + 32)
				*s = char2[index] + '0';
		}
		s++;
	}
	return (ptr);
}
