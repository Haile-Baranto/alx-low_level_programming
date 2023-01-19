#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of extra params
 * Return: total sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int count;
	va_list valueList;

	if (n == 0)
		return (0);
	va_start(valueList, n);
	for (count = 0, sum = 0; count < n; count++)
		sum += va_arg(valueList, int);

	va_end(valueList);

	return (sum);
}
