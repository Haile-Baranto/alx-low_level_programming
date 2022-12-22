#include "main.h"

/**
 * _strcat - concatinates two strings
 * @dest: is where the charachters from src will be concatinated
 * @src: from where we will take the strings to be concatinated
 * Reterun: resulting string
 * Description: using library function is not allowed except _puthcar()
 */

char *_strcat(char *dest, char *src)
{
	/*
	char* ptr1;
	char* ptr2;
	*/
	int len;
	int j;

	/*
	ptr1 = dest;
	ptr2 = src;
	*/
	j = 0;
	len = 0;
	while(dest[len] != '\0')
	{
		len++;
	}
	for (j = 0; src[j] != '\0'; ++len, ++j)
	{
		dest[len] = src[j];
	}
	dest[len] = '\0';
	return (dest);
}
