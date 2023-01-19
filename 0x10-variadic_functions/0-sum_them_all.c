#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its its numeric parameter
 * @n: number of parameter passed
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
	sum = 0;
	for (count = 0; count < n; count++)
		sum += va_arg(valueList, int);

	va_end(valueList);

	return (sum);
}
