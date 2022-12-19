#include "main.h"

/**
 * print_rev - prints out string of charachters to stdio in
 * in reverse order
 * @s: the address of the string to be printed out
 * Description: can use only _putchar
 */

void print_rev(char *s)
{
	int length;

	for (length = 1; s[length] != '\0'; length++)
	{
		length += 1;
	}
	for (--length; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
