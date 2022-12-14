#include "main.h"

/**
  * print_to_98 - Prints numbers from n to 98
  * @n: The arguement from which counting starts
  *
  * Return: Always 0.
  */
void print_to_98(int n)
{
	int num;

	num = n;

	if (num <= 98)
	{
		for (; num <= 98; num++)
		{
			if (num == 98)
			{
				printf("%d", num);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", num);
			}
		}
	}
	else
	{
		for (; num >= 98; num--)
		{
			if (num == 98)
			{
				printf("%d", num);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", num);
			}
		}
	}
}

