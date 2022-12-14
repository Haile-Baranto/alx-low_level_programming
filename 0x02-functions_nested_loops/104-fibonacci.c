#include <stdio.h>

/**
 * main - prints out the fibonacci of the first 89 numbers
 * The numbers wiil be separated by comma followed space
 * Return: return 0
 */
int main(void)
{
	unsigned int a;
	unsigned int b;
	int count;
	unsigned int result;

	a = 0;
	b = 1;
	count = 0;
	result = 0;

	for (count = 0; count <= 98; count++)
	{
		printf("%u, ", a);
		result = a + b;
		a = b;
		b = result;
	}
	return (0);
}
