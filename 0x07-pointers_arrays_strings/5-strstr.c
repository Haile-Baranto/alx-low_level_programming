#include "main.h"
#include <stdlib.h>

/**
 * _strstr -  finds the first occurrence of the substring needle in the
 * string haystack. The terminating null bytes (\0) are not compared
 * @haystack: pointer to a string whose substring will be printed
 * @needle: pointer to string which is used to find particalar pattern
 * in string
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int t;

	i = 0;
	t = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j + t] != '\0' && haystack[i + t] != '\0'
		       && needle[j + t] == haystack[i + t])
		{
			if (haystack[i + t] != needle[j + t])
				break;
			t++;
		}
		if (needle[j + t] == '\0')
			return (&haystack[i]);
		j++;
		i++;
	}

	return (NULL);
}
