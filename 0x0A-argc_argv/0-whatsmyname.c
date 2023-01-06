#include <stdio.h>
/**
 * main - prints its name followed by its name.
 * Return: 0 if the program is successfull.
 * @argc: the number of arguement from command linepassed to the program
 * @argv: poiter to to an array of string
 * Description: If you rename the program, it will print the new name,
 * without having to compile it again. and
 * You should not remove the path before the name of the program
 */

int main(int argc, char **argv)
{
	argc = 0;
	printf("%s\n", argv[argc]);
	return (0);
}
