#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line using at most 3 _putchar func
 * Return: void
 */

void more_numbers(void)
{
	int c;
	char counter;

	c = 0;
	counter = 0;
	for (counter = 0; counter < 10; counter++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
				_putchar(c / 10 + '0');
			if (c >= 0 || c <= 14)
			{
				_putchar(c % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
