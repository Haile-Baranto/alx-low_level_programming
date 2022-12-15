#include "main.h"

/**
 * print_square - the function print square followed by new line
 * using only _putchar function
 * @size: parameter that recive the size of square
 * Return: void
 */

void print_square(int size)
{
	int  count1;
	int count2;

	count1 = 1;
	count2 = 1;
	if  (size > 0)
	{
		for (count1 = 1; count1 <= size; count1++)
		{
			for (count2 = 1; count2 <= size; count2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

	else
		_putchar('\n');
}
