#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number.
 * @n:  Decimal number to be printed in its binary form
 * Description: Not allowed to use arrays, malloc, % or /
 */
void print_binary(unsigned long int n)
{
	int shift = 0;
	int i;

	if (n == 0)
		printf("0");

	for (i = 0, shift = 0; (n >> i) > 0; i++, shift++)
		;
	for (shift--; shift >= 0; shift--)
	{
		if ((n >> shift) & 01)
		{
			_putchar('1');
		}
		else
			_putchar('0');
	}
}
