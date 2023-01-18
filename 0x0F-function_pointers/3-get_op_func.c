#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - select the correct operation function asked by user
 * @s: operator argument
 * Return: function pointer corresponding to operator given
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int j;

	for (j = 0; j < 5; j++)
	{
		if (ops[j].op[0] == s[0])
			return (ops[j].f);
	}
	return (NULL);
}
