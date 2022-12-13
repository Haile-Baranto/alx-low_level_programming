#include "main.h"
/**
 * print_sign - This function returns 1 if input is letter otherwise 0
 * otherwise return 0
 * @n:: is a parameter and is used to pass the number whose sign is
 * to be checked
 * Return: int
 */

int print_sign(int n)
{
	int number;

	number = n;

	if (number > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (number == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
