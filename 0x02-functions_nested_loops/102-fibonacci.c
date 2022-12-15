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
	long  int num1;
	long  int num2;
	long  int sum;
	char c;

	num1 = 0;
	num2 = 1;
	c = 1;
	for (c = 1; c <= 50; c++)
	{
		sum = num1 + num2;
		if (c != 50)
			printf("%li, ", sum);
		else
			printf("%li", sum);
		num1 = num2;
		num2 = sum;
	}
	printf("\n");
	return (0);
}
