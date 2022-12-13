#include "main.h"
/**
 * print_alphabet - This function  prints a through z
 *
 * Return: void
 */

void print_alphabet(void)
{
	char count;

	for (count = 'a'; count <= 'z'; count++)
	{
		_putchar(count);
	}
	_putchar('\n');
}
