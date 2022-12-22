#include "main.h"

/**
 * *_strncat - concatinates two strings
 * @dest: points to where the string will be concatinated
 * @src: points where we will take the strings to be concatinated
 * @n: int the size of charachters to be taken fro src
 * Return:  string of charachters
 * Description: using library function is not allowed except _puthcar()
 */

char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
	{
		++len;
	}
	for (i = 0; src[i] != n && n > 0; n--, i++, len++)
	{
		dest[len] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
