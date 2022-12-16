#include "main.h"

/**
 * print_line - the function draws a straight line using '_'
 * in the terminal using only putchar
 * @n: parameter that recive the number of '_' to printed
 * Return: void
 */

void print_line(int n)
{
	char count;

	count = 1;
	if  (n > 0)
	{
		for (count = 1; count <= n; count++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
