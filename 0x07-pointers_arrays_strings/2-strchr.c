#include "main.h"
/**
 * _strchr - Relocates the position of character
 * @s: pointer to the first occurence of the charachter to relocated
 * @c: charachter to be relocated
 * Return: a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
