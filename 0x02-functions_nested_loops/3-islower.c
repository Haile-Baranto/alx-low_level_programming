#include "main.h"
/**
 * _islower- This function returns 1 if input small letter
 * otherwise return 0
 * @c:: is a parameter and is used to pass arguement to the function
 * Return: int
 */

int _islower(int c)
{
	char count;

	count = c;

	if (count >= 'a' && count <= 'z')
		return (1);
	else
		return (0);
}
