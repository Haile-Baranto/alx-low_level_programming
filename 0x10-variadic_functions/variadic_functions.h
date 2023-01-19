#ifndef HEADER
#define HEADER
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void printChar(va_list list);
void printStr(va_list list);
void printFloat(va_list list);
void printInt(va_list list);
/**
 * struct print_ops - struct use to match the operator
 * with correlating function
 * @op: string represention of the operator.
 * @f: function pointer for the operation to be used.
 */
typedef struct print_ops
{
	char *op;
	void (*f)(va_list);
} p_op;
#endif
