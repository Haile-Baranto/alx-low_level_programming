#include "main.h"
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
	for (prime_factor = 1; prime_factor < num; prime_factor += 2 )
	{
		if (num % prime_factor == 1)
			result = prime_factor;
	}
	if (prime_factor == 1)
		printf("THe number does not have prime factor");
	printf("%li\n", result);
	
	return (0);
}
