#include "main.h"
/**
 * _strlen_recursion - returns the length of string
 * @s: pointer to string whose length will be calculated
 * Description - iteration is not allowed
 * Return: length of string to be printed
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s == '\0')
		return (0);
	i = 1 +  _strlen_recursion(s + 1);
	return (i);
}
