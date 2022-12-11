#include <stdio.h>
#define MAXSTRING 100

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *The program prints 0-9 using puthcar
 *
 */

int main(void)
{
	char array[] = "0123456789";
	int num_seq;

	for (num_seq = 0; num_seq < MAXSTRING; num_seq++)
	{
		if (array[num_seq] == '\0')
		{
			putchar('\n');
			break;
		}
		else
			putchar(array[num_seq]);
	}
	return (1);
}

