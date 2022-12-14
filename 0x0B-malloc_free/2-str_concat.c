#include "main.h"

/**
 * str_concat - concatinate two strings
 * @s1: pointer to the 1st string to be concatinated
 * @s2: pointer to the 2nd string to be concatinated
 * Return: The returned pointer should point to a newly allocated
 * space in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 * Description - if NULL is passed, treat it as an empty string. and
 * The function should return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *newPointer;
	int size1;
	int size2;
	int counter2;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (size1 = 0; s1[size1] != '\0'; size1++)
	{
		;
	}
	for (size2 = 0; s2[size2] != '\0'; size2++)
	{
		;
	}
	newPointer = malloc((size1 + size2) * sizeof(*s2) + 1);
	if (newPointer == NULL)
		return (NULL);
	for (i = 0, counter2 = 0; i < (size1 + size2 + 1); i++)
	{
		if (i < size1)
			newPointer[i] = s1[i];
		else
			newPointer[i] = s2[counter2++];
	}
	return (newPointer);
}
