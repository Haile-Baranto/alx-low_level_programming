#include "main.h"

/**
 * is_prime_number - determine if a number is a prime number
 * @n: number to be checked it it is prime or not
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n < 4)
		return (1);
	return (helper(n, 2));
}

/**
 * square_root - return square root of number
 * @n: number to be checked its primness
 * @increamentor: used as divisor
 * Return: square root of x
 */

int square_root(int n, int increamentor)
{
	if (increamentor * increamentor >= n)
		return (increamentor);
	else
		return (square_root(n, increamentor + 1));
}

/**
 * helper - helper for recursive step
 * @n: number to be checked if it is prime
 * @divisor: increasing divisor
 * Return: 0 if not prime, 1 if prime
 */

int helper(int n, int divisor)
{
	if (n % divisor == 0)
		return (0);
	else if (square_root(n, 1) < divisor)
		return (1);
	else
		return (helper(n, divisor + 1));
}
