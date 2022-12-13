#include "main.h"
/**
 * jack_bauer - print every minut of the day
 * otherwise return 0
 * @void: no parameter
 * Return: void
 */

void jack_bauer(void)
{

	int counter1;
	int counter2;

	counter1 = 0;
	counter2 = 0;

	for (counter1 = 0; counter1 < 24; counter1++)
	{
		for (counter2 = 0; counter2 <= 59; counter2++)
		{
			_putchar((counter1 / 10) + '0');
			_putchar((counter1 % 10) + '0');
			_putchar(':');
			_putchar((counter2 / 10) + '0');
			_putchar((counter2 % 10) + '0');
			_putchar('\n');
		}
	}
}
