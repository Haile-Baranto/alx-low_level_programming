#include "main.h"
/**
 * print_numbers - print 0-9 followed by new line
 * only using _putchar
 *
 * Return: void
 */

void print_numbers(void)
{
	char c;

	c = 0;
	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}

