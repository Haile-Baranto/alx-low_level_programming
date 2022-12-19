#include "main.h"

/**
 * puts_half - prints second half of string
 * @str: pointer parameter which points to character sequence to
 * be printed out
 */

void puts_half(char *str)
{
	int length;
	int counter;

	length = 0;
	for (length = 0; str[length] != '\0'; length++)
	{
		length += 1;
	}
	for (counter = length / 2; str[counter] != '\0'; counter += 1)
	{
		_putchar(str[counter]);
	}
	_putchar('\n');
}
