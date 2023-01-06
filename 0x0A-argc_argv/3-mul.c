#include <stdio.h>
#include <stdlib.h>
/**
 * main -  multiplies two numbers
 * Return: product of the two numbers if successfull else 1.
 * @argc: the number of arguements passed to the program from command line
 * @argv: pointer to an array the contains the strings passed to our program
 * Description: You can assume that the two numbers and result of the
 * multiplication can be stored in an integer
 * and If the program does not receive two arguments, your program
 * should print Error, followed by a new line, and return 1
 */

int main(int argc, char **argv)
{
	int i;

	if ((argc - 1) == 2)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
	return (0);
}
