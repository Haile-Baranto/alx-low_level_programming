#include <stdio.h>

/**
 * main - Write a program that prints all possible different
 * combinations of three digits.
 * Numbers must be separated by ,, followed by a space
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 * of the three digits 0, 1 and 2
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 * You can only use the putchar function (every other function
 * (printf, puts, etc…) is forbidden)
 * You can only use putchar six times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1;
	int num2;
	int num3;
	int count1 = 1;
	int count2 = 2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = count1; num2 < 10; num2++)
		{
			for (num3 = count2; num3 < 10; num3 += 1)
			{
				if (num3 > num2)
				{
					putchar(num1 + '0');
					putchar(num2 + '0');
					putchar(num3 + '0');
					if ((num1 * 100 + num2 * 10 + num3) < 789)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		count2 += 1;
		count1 += 1;
	}
	putchar('\n');
	return (0);
}





















