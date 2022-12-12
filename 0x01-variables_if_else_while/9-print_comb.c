#include <stdio.h>
#define MAXSTRING 100

/**
 * main - The program prints 0-9 using putchar only and with out using char
 *
 * Return: Always 0 (Success)
 *The program prints 0-9 using puthcar
 *
 */

int main(void)
{
	int counter;

	for (counter = 0; counter  < 10; counter += 1)
	{
		putchar(counter + '0');
		if (counter != 9)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}

