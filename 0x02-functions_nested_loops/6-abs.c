#include "main.h"
/**
 * _abs;- This function returns the absolute value of a numi
 * otherwise return 0
 * @i: is a parameter type went to function _abs
 * the function
 * Return: int
 */

int _abs(int i)
{
	int num;

	num = i;

	if (num >= 0)
		return (num);
	else
		return (-num);
}
