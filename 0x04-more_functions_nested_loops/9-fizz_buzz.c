#include <stdio.h>
/**
 * main - prints 1 -100 but for multiple 3 print "Fizz"
 * for multiple of 5 Buz for multiple of both 3 and 5
 * FizzBuzz
 * standard library allowed
 * Return: 0
 */

int main(void)
{
	int num;

	num = 1;
	for (num = 1; num <= 100; num++)
	{
		if ((num % 3 != 0) && (num % 5 != 0))
			printf("%d ", num);
		else if ((num % 3 == 0) && (num % 5 == 0))
			printf("FizzBuzz ");
		else if (num % 3 == 0)
			printf("Fizz ");
		else if (num % 5 == 0)
			printf("Buzz ");
	}
	printf("\n");
	return (0);
}
