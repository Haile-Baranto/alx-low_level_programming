#include "main.h"

/**
 * _strcpy - Write a function that copies the string pointed
 * to by src, including the terminating null byte (\0), to
 * the buffer pointed to by dest
 * @dest: return type of the function strcpy
 * @src: pointer to the string to be copied
 * Return: string of char (dest)
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';

	return (dest);
}


