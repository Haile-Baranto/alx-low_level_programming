#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * Return: a pointer to the memory area s
 * @n: the size of the buffer to filled
 * @s: pointer to memory area to be filled with constant
 * @b: the constant to be filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	for (; n > 0; n--)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

