#include <stdio.h>
#include <stdlib.h>
/**
 * main -  add positive numbers
 * Return: return 0 if positive number arguementa or no arguement else 1.
 * @argc: the number of arguements passed to the program from command line
 * @argv: pointer to an array the contains the strings passed to our program
 * Description: Print the result, followed by a new line
 * If no number is passed to the program, print 0, followed by a new line.
 * If one of the number contains symbols that are not digits,
 * print Error, followed by a new line, and return 1
 * You can assume that numbers and the addition of all
 * the numbers can be stored in an int
 */

int main(int argc, char **argv)
{
	int count;
	int sum;
	char *ptr;
	int index;

	sum = 0;
	count = 1;
	if (argc > 1)
	{
		while (argv[count])
		{
			index = strtol(argv[count], &ptr, 10);
			if (!*ptr)
				sum += index;
			else
			{
				printf("Error\n");
				return (1);
			}
			count++;
		}
		 printf("%d\n", sum);
	}
	else
		printf("%d\n", 0);
	return (0);
}
