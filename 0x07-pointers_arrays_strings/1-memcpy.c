#include "main.h"

/**
 * _memcpy - copies memory area pointed by src to
 * memory area pointed by dest
 * Return: pointer dest
 * @n: the size of the buffer to be copied
 * @dest: pointer to where we will copy
 * @src: pointer from where we will  copy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	for (; n > 0; n--)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

