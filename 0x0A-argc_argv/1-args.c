#include <stdio.h>
/**
 * main -  prints the number of arguments passed into it.
 * Return: 0 if the program is successfull.
 * @argc: the number of arguements passed to the program from command line
 * @argv: pointer to an array the contains the strings passed to our program
 * Description: Your program should print a number, followed by a new line
 */

int main(int argc, char **argv)
{
	if (*argv[argc - 1] != '\0')
		printf("%d\n", --argc);
	return (0);
}
