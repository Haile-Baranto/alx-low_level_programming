#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print each number with separator, followed by a newline
 * @separator: string to sepatete the numbers to be printed
 * @n: number of args passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list list;

	va_start(list, n);
	count = 0;
	while (count < n)
	{
		printf("%d", va_arg(list, int));
		if (count != (n - 1) && separator != NULL)
			printf("%s", separator);
		count++;
	}
	printf("\n");

	va_end(list);
}
