#include "main.h"

#define UNUSED(x)(void)(x)
/**
 * main - multiplies two numbers
 * @argc: size of command line arguement
 * @argv: array vector of command line inputs
 * Return: sum
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);
	return (0);
}
