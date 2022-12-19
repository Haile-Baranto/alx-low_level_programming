#include "main.h"

/**
 * print_rev - prints out string of charachters to stdio in
 * in reverse order
 * @s: the address of the string to be printed out
 * Description: can use only _putchar
 */

void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		;
	}

	for (index--; index >= 0; index--)
	{
		_putchar(s[index]);
	}

	_putchar('\n');
}
