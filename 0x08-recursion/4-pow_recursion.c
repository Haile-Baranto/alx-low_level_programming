#include "main.h"

/**
 * _pow_recursion - calculate x to power of y
 * @x: base of the exponent
 * @y: power to which y rises
 * Return: returns the value of x raised to the power of y.
 * Description: iteration is not allowed
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
