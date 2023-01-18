#include <stdio.h>
#include <stdlib.h>

/**
 * op_div - divides two numbers
 * @a: first num
 * @b: second num
 * Return: result of the division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - modulo division of two numbers
 * @a: first num
 * @b: second num
 * Return: remainder of division of the numbers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

/**
 * op_add - addition operator
 * @a: 1st num
 * @b: 2nd num
 * Return: sum of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 * @a: first num
 * @b: second num
 * Return: reururn (a - b)
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return product of two  numbers
 * @a: first num
 * @b: second num
 * Return: product of the numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
