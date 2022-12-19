#include "main.h"
#include <stdio.h>

/**
 * _strlen - calculates the length of string
 * @s: pointer to the string whose length will be calculated
 * Return: 0 scussfull
 */

int _strlen(char *s)
{
	int length;
	int counter;

	length = 0;
	for (counter = 0; s[counter] != '\0'; counter++)
	{
		length += 1;
	}
	return (length);
}
