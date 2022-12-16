#include <stdio.h>
#include <math.h>
/**
 * main - find and print the largest prime factor
 * of 612852475143
 * Return: 0
 */

int main(void)
{
	long int num;
	long int prime_factor;
	long int result;

	num = 612852475143;
	for (prime_factor = 2; prime_factor < (int)sqrt(num); prime_factor += 1)
	{
		if (num % prime_factor == 0)
		{
			result = prime_factor;
		}
	}
	printf("%li\n", result);
	
	return (0);
}
