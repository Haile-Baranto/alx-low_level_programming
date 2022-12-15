#include "main.h"

/**
 * print_diagonal - the function draws diagonal using '\&
 * using only _putchar function
 * @n: parameter that recive the number of \$ to printed
 * Return: void
 */

void print_diagonal(int n)
{
	 int  count1;
	 int count2;

	count1 = 1;
	if  (n > 0)
	{
		for (count1 = 1; count1 <= n; count1++)
		{
			for (count2 = count1; count2 >= 0; count2--)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}

	else
		_putchar('\n');
}
