#include "main.h"

/**
 * rev_string - prints out string of charachters to stdio in
 * in reverse order
 * @s: the address of the string to be printed out
 * Description: can use only _putchar
 */


void rev_string(char *s)
{
	int i;
	char tmp;
	int leftEnd;
	int rightEnd;

	for (i = 0; s[i] != '\0'; i++)
	{
		i += 1;
	}
	leftEnd = 0;
	rightEnd = i - 2;
	for (i = leftEnd; i < rightEnd; i++)
	{
		tmp = s[i];
		s[i] = s[rightEnd];
		s[rightEnd] = tmp;
		rightEnd--;
	}
}

