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
	unsigned  int num1;
	unsigned  int num2;
	unsigned  int sum;
	char c;

	num1 = 0;
	num2 = 1;
	c = 1;
	for (c = 1; c <= 50; c++)
	{
		sum = num1 + num2;
		if (c != 50)
			printf("%u, ", sum);
		else
			printf("%u", sum);
		num1 = num2;
		num2 = sum;
	}
	printf("\n");
	return (0);
}
