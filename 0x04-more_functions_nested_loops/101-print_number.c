#include "main.h"

/**
 * print_number - prints an integer.
 * @n: number type int
 * Description: use _putchar to print result out.
 */
void print_number(int n)
{
	int factor;
	/*
	 * to create loop until else black is executed
	 */
	int one;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	factor = 1;
	one = 4;
	while (one)
	{
		if (n / (factor * 10) > 0)
			factor *= 10;
		else
			one = 0;
	}

	/*
	 * now based on the value of m we can find
	 * print out integer value
	 */
	while (n >= 0)
	{
		if (factor == 1)
		{
			_putchar(n % 10 + '0');
			n = -1;
		}
		else
		{
			_putchar((n / factor % 10) + '0');
			factor /= 10;
		}
	}
}
