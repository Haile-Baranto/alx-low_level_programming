#include "main.h"

/**
 * rev_string - prints out string of charachters to stdio in
 * in reverse order
 * @s: the address of the string to be printed out
 * Description: can use only _putchar
 */

void rev_string(char *s)
{ 
	char ch;
	int right;
	int len;
	int left;

	len = 0;
	for (len = 0; s[len] != '\0'; len++)
	{
		;
	}
	 for (len--, left = 0; left < len / 2; right--, left++)
	 {
		 ch = s[left];
		s[left] = s[right];
		 s[right] = ch;
	 }
}
