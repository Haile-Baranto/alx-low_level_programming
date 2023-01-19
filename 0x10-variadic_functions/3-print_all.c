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

	int i, j;
	va_list vls;
	p_op ops[] = {
		{"c", printChar},
		{"i", printInt},
		{"f", printFloat},
		{"s", printStr},
		{NULL, NULL}
	};

	va_start(vls, format);
	i = j = 0;
	while (format && format[j])
	{
		i = 0;
		while (ops[i].op)
		{
			if (ops[i].op[0] == format[j])
			{
				(ops[i].f)(vls);
				if (format[j + 1])
					printf(", ");
			}
			i++;
		}
		j++;

	}
	putchar(10);
	va_end(vls);
}
