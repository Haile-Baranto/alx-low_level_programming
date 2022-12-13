#include "main.h"
/**
 * _isalpha- This function returns 1 if input is letter otherwise 0
 * otherwise return 0
 * @c:: is a parameter and is used to pass the value to be checked to
 * the function
 * Return: int
 */

int _isalpha(int c)
{
	char small;
	char capital;

	small = c;
	capital = c;

	if (small >= 'a' && small <= 'z')
		return (1);
	else if (capital >= 'A' && capital <= 'Z')
		return (1);
	else
		return (0);
}
