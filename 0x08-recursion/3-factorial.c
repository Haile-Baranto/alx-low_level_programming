#include "main.h"

/**
 * factorial - returns factorial of a number
 * @n: parameter to pass number whose factorial will be determined
 * Return: factorial of the number to be determined
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if ( n < 0)
		return (-1); 
	return (n * factorial(n  - 1));
}
