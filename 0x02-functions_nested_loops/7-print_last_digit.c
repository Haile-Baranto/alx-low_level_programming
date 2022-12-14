#include "main.h"
/**
 * print_last_digit - This function returns the absolute value of a numi
 * otherwise return 0
 * @i: is a parameter type went to function _abs
 * the function
 * Return: Returns the value of the last digit
 */

int print_last_digit(int i)
{
	int num;

	num = i % 10;

	if (num < 0)
	{
		num = num * -1;
		_putchar(num + '0');
		_putchar(num + '0');
		return (-1 * num);
	}
	else
	{
		_putchar (num + '0');
		return (num);
	}
}
