

#include "main.h"

/**
 * argstostr - concatenate all arguments of your program with newline
 * @ac: argument count
 * @av: double pointer to array of strings passed to main
 * Return: Null if fail, else return pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *p;
	char *temp;
	int c1;
	int c2;
	int len;

	if (av == NULL || ac == 0)
		return (NULL);
	c1 = 0;
	len = 0;
	while (c1 < ac)
	{
		for (c2 = 0; *(*(av + c1) + c2) != '\0'; len++, c2++)
		{
			;
		}
		len++;
		c1++;
	}
	len++;
	p = malloc(len * sizeof(char));
	if (p == NULL)
		return (NULL);

	temp = p;
	for (c1 = 0; c1 < ac; c1++)
	{
		for (c2 = 0; av[c1][c2] != '\0'; c2++)
		{
			*p = av[c1][c2];
			p++;
		}
		*p = '\n';
		p++;
	}

	return (temp);
}
