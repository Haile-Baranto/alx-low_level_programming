#include "main.h"

/**
 * rev_string - prints out string of charachters to stdio in
 * in reverse order
 * @s: the address of the string to be printed out
 * Description: can use only _putchar
 */


void rev_string(char *s)
{
	int count;
	int num;
	int length;
	char temp;

	for (count = 0; s[count] != '\0'; count++)
		;
	length = count;
	for (count--, num = 0; num < length / 2; count--, num++)
	{
		temp = s[num];
		s[num] = s[count];
		s[count] = temp;
	}
}
