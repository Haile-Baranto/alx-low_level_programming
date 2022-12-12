#include <stdio.h>

/**
 * main -the program prints out in the form of {01, 02, 03, 04, 05...}
 * with increasing order using putchar function. No use of char key word and
 * numbers like 00 11 22 should not be printed
 * Return: Always 0 (Success)
 I*/

int main(void)
{
	int num;

	for (num = 1; num < 10; num++)
	{
		putchar('0');
		putchar(num + '0');
		putchar(',');
		putchar(' ');
	}
	for (num = 2; num < 10; num++)
	{
		putchar('1');
		putchar(num + '0');
		putchar(',');
		putchar(' ');
	}
	for (num = 3; num < 10; num++)
	{
		putchar('2');
		putchar(num + '0');
		putchar(',');
		putchar(' ');
	}
	for (num = 5; num < 10; num++)
	{
		putchar('4');
		putchar(num + '0');
		putchar(',');
		putchar(' ');
	}
	for (num = 6; num < 10; num++)
	{
		putchar('5');
		putchar(num + '0');
		putchar(',');
		putchar(' ');
	}
	for (num = 7; num < 10; num++)
	{
		putchar('6');
		putchar(num + '0');
		putchar(',');
		putchar(' ');
	}
	for (num = 8; num  < 10; num++)
	{
		putchar('7');
		putchar(num + '0');
		putchar(',');
		putchar(' ');
	}
	for (num = 9; num < 10; num++)
	{
		putchar('8');
		putchar(num + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}





















