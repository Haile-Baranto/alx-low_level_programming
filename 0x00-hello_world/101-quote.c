#include <stdio.h>
#define MAXSTRING 100

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *The program prints out the string array using puthcar
 *
 */

int main(void)
{
	char array[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int char_seq;

	for (char_seq = 0; char_seq < MAXSTRING; char_seq++)
	{
		if (array[char_seq] == '\0')
		{
			putchar('\n');
			break;
		}
		else
			putchar(array[char_seq]);
	}
	return (1);
}

