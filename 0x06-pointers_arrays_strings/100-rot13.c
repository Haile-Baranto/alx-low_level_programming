#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 * Return: pointer to a char
 * @s: pointer to a char
 * Description - not allowed to use switch, terinery operator
 * and you can use if and loops only once and twice respctively
 */

char *rot13(char *s)
{
	int i;

	i = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		while ((s[i] > 96 && s[i] < 123) ||  (s[i] >= 65 && s[i] <= 90))
		{
			if ((78 - s[i] >= 0) || (109 - s[i] >= 0))
				s[i] = s[i] + 13;
			else
				s[i] = s[i] - 13;
		}
			continue;

	}
	return (s);
}
