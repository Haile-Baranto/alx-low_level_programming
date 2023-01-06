#include <stdio.h>
/**
 * main -  prints all the arguements passed from command line
 * Return: 0 if the program is successfull.
 * @argc: the number of arguements passed to the program from command line
 * @argv: pointer to an array the contains the strings passed to our program
 * Description: All arguments should be printed, including the first one.
 * Only print one argument per line, ending with a new line.
 */

int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
