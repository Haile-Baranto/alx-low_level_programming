#include "main.h"

/**
 * _puts - prints out string of charachters to stdio with
 * end of new line
 * @str: the address of the string to be printed out
 */

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
