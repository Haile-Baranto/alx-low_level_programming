#include "main.h"

/**
 * puts2 - prints every oother characheter
 * @str: pointer parameter which points to character sequence to
 * be printed out
 */

void puts2(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count += 2)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
