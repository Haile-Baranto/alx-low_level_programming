#include <stdio.h>
/**
 * main - Entry point
 *
 * The program prints the first 98 fibonacci numbers starting 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	long double num1;
	long double num2;
	long double sum;
	char c;

	num1 = 0;
	num2 = 1;
	c = 1;
	for (c = 1; c <= 98; c++)
	{
		sum = num1 + num2;
		if (c != 98)
			printf("%.0Lf, ", sum);
		else
			printf("%.0Lf", sum);
		num1 = num2;
		num2 = sum;
	}
	printf("\n");
	return (0);
}
