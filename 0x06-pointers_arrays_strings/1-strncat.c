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
		len++;
	}
	while (src[i] != '\0' && n > 0)
	{
		dest[len] = src[i];
		n--;
		i++;
		len++;
	}
	return (dest);
}
