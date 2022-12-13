#include "main.h"
/**
 * print_alphabet_x10 - This function  prints a through z
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char count;
	char c;

	for (c =  0; c < 10; c++)
	{
		for (count = 'a'; count <= 'z'; count++)
		{
			_putchar(count);
		}
		_putchar('\n');
	}
}
