#include <stdio.h>
#define MAXSTRING 100

/**
 * main - The program prints all hexadecimal numbers 0-f
 *
 * Return: Always 0 (Success)
 *The program prints 0-9 using puthcar
 *
 */

int main(void)
{
	char hex;
	int counter;

	for (counter = 0; counter <= 9; counter += 1)
	{
		putchar(counter + '0'); /* add 0 to find ASCII code of each numbers */

	}
	for (hex = 'a'; hex <= 'f'; hex += 1)
		putchar(hex);
	putchar('\n');
	return (0);
}

