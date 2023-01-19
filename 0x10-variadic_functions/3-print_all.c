#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * printChar - print chars in va_list
 * @list: a list of type va_list passed to the function
 */
void printChar(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * printStr - print string element from va_list
 * @list: va_list passed to function
 */
void printStr(va_list list)
{
	char *string;

	string = va_arg(list, char *);
	if (string == NULL)
		printf("(nil)");
	printf("%s", string);
}

/**
 * printFloat - print float type element from va_list
 * @list: a list of type va_list passed to the function
 */
void printFloat(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * printInt - print int type element from va_list
 * @list: va_list passed to function
 */
void printInt(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_all - print all argument that match with format.
 * @format: type to print out.
 * @...: arguments to print.
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list args;
	char *sep;

	p_op storage[] = {
		{ "c", printChar },
		{ "f", printFloat },
		{ "s", printStr },
		{ "i", printInt }
	};

	i = 0;
	sep = "";
	va_start(args, format);
	while (format != NULL && format[i / 4] != '\0')
	{
		j = i % 4;
		if (storage[j].op[0] == format[i / 4])
		{
			printf("%s", sep);
			storage[j].f(args);
			sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
