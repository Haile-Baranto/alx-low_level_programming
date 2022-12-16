#include <stdio.h>
#include <math.h>

/**
 * main - find the largest prime factor of 612852475143
 * Return: 0
 */
int main(void)
{
	int factor;
	long number = 612852475143;

	for (factor = (int) sqrt(number); factor > 2; factor++)
	{
		if (number % factor == 0)
		{
			printf("%d\n", factor);
			break;
		}
	}

	return (0);
}
