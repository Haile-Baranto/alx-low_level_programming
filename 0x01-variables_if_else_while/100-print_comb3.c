#include <stdio.h>

/**
 * main -the program prints out in the form of {01, 02, 03, 04, 05...}
 * with increasing order using putchar function. No use of char key word and
 * numbers like 00 11 22 should not be printed
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1;
	int num2;
	int intial = 1;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = intial; num2 < 10; num2++)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');
			if ((num1 + num2 * 10) != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		++intial;
	}
	putchar('\n');
	return (0);
}





















