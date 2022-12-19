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
	int counter;

	for (length = 1; s[length] != '\0'; length++)
	{
		length += 1;
	}
	length = length - 1;
	for (counter = length; counter >= 0; counter--)
	{
		_putchar(s[counter]);
	}
	_putchar('\n');
}
