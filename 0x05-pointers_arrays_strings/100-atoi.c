#include "main.h"

/**
 * _atoi - Write a function that convert a string to an integer.
 * The number in the string can be preceded by an infinite
 * number of characters
 * You need to take into account all the - and + signs before the number
 * If there are no numbers in the string, the function must return 0
 * You are not allowed to use long
 * You are not allowed to declare new variables of “type” array
 * You are not allowed to hard-code special values
 * We will use the -fsanitize=signed-integer-overflow gcc flag
 * to compile your code.
 * @s: pointer to the value to be converted
 * Return: int
 */


int _atoi(char *s)
{
	int index;
	int  result;
	int nega;

	result = 0;
	nega = -1;
	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == '-')
			nega *= -1;

		if (s[index] > 47 && s[index] < 58)
		{
			if (result >= 0)
				result = (s[index] - '0') * -1;
			else
				result = (result * 10) - (s[index] - '0');

			if (s[index + 1] < 48 || s[index + 1] > 57)
				break;
		}
		index++;
	}
	if (nega < 0)
		result *= -1;

	return (result);
}
