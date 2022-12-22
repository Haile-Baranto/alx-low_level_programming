#include "main.h"

/**
 * *_strncpy - concatinates two strings
 * @dest: points to where the string will be copied
 * @src: points from where we will copy the the strings
 * @n: int the size of charachters to be copied from src
 * Return:  string of charachters
 * Description: library functions are not allowed and the
 * function should be exactly the same with the built in
 * strncpy built in function
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
