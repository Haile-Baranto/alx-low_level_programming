#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of itself.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int temp;
	int count;
	int (*address)(int, char **) = main;
	unsigned char code;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	temp = atoi(argv[1]);

	if (temp < 0)
	{
		printf("Error\n");
		exit(2);
	}

	count = 0;
	while (count < temp)
	{
		code = *(unsigned char *)address;
		printf("%.2x", code);

		if (count == temp - 1)
			continue;
		printf(" ");

		address++;
		count++;
	}

	printf("\n");

	return (0);
}
