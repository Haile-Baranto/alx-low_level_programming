#include "main.h"

/**
 *  _sqrt_recursion - compute sqrt of a number
 *  @n: number whose sqrt is to be calculated
 *  Return: if it exists it return natural root else -1
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - helper function to solve _sqrt_recursion
 * @num: number whose sqrt is to be deterimened if it exists
 * @root: number to check if it is sqrt of the num
 * Return: square root if natural square root exists, else -1
 */

int _sqrt(int num, int root)
{
	int sq;

	sq = root * root;
	if (sq == num)
		return (root);
	else if (sq < num)
		return (_sqrt(num, root + 1));
	return (-1);
}
