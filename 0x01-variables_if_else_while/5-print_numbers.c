#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * the program prints integers 0-9
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%i", num);
	}
	printf("\n");
	return (0);
}
