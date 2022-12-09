#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * The program prints small case  and then  upper case letters then new line
 */

int main(void)
{
	char small_case;
	char upper_case;

	for (small_case = 'a'; small_case <= 'z'; small_case++)
	{
		putchar(small_case);
	}
	for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
	{
		putchar(upper_case);
	}
	putchar('\n');
	return (0);
}
