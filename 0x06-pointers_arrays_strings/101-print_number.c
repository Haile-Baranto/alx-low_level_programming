#include "main.h"

/**
 * print_number - prints the arguement out
 * @n: parameter to be printed out
 */

void print_number(int n)
{
	if (n / 10 != 0)
	{
		print_number(n / 10);
		if (n > 0)
		{
			_putchar(n % 10 + '0');
		}
		else
		{
			_putchar(-n % 10 + '0');
		}
	}
	else if ((n / 10 == 0) && (n >= 0))
	{
		_putchar(n % 10 + '0');
	}
	else if ((n / 10 == 0) && (n < 0))
	{
		n = -n;
		_putchar('-');
		_putchar(n % 10 + '0');
	}
}
