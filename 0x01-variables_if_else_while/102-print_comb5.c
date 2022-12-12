#include <stdio.h>

/**
 * main - Write a program that prints all possible combinations of
 * two two-digit numbers.The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits. 1 should be
 * printed as 01.The combination of numbers must be separated
 * by comma, followed by a space.The combinations of numbers should
 * be printed in ascending order 00 01 and 01 00 are considered as the
 * same combination of the numbers 0 and 1. You can only use the putchar
 * function (every other function (printf, puts, etc…) is forbidden).
 * You can only use putchar eight times maximum in your code.
 * You are not allowed to use any variable of type char.
 * All your code should be in the main function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number1;
	int number2;

	for (number1  = 0; number1 <= 98; number1++)
	{
		for (number2 = number1 + 1; number2 <= 99; number2++)
		{
			putchar((number1 / 10) + '0');
			putchar((number1 % 10) + '0');
			putchar(' ');
			putchar((number2 / 10) + '0');
			putchar((number2 % 10) + '0');

			if (number1 == 98 && number2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

