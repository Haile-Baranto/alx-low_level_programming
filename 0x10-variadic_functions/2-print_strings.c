#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print a string followed by a newline
 * @separator: string that will be printed between the strings
 * @n: number of strings passed to function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list list;
	char *temp;

	va_start(list, n);
	count = 0;
	while (count < n)
	{
		temp = va_arg(list, char*);
		if (temp == NULL)
			printf("(nil)");
		else
			printf("%s", temp);
		if (count != (n - 1) && separator != NULL)
			printf("%s", separator);
		count++;
	}
	printf("\n");

	va_end(list);
}
