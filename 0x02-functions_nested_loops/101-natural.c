#include <stdio.h>

/**
 * main - This program prints out all multiple of
 * 3 or 5
 * Return: always 0
 */
int main(void)
{
	int num;
	int mul_3;
	int mul_5;
	int sum;

	sum = 0;
	num = 1;

	for (num = 1; num < 1024; num++)
	{
		mul_3 = num % 3;
		mul_5 = num % 5;
		if ((mul_3 == 0) || (mul_5 == 0))
			sum += num;
	}
	printf("%i\n", sum);
	return (0);
}
