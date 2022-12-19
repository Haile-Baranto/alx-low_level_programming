#include "main.h"

/**
 * puts2 - prints every oother characheter
 * @str: pointer parameter which points to character sequence to
 * be printed out
 */

void puts2(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len += 2)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
