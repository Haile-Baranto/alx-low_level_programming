#include "main.h"

/**
 * string_nconcat - concatinate all charachters of s1 with n charachters of s2
 * @s1: first string
 * @s2: second string
 * @n: number of charachters from s2 that wiil be concatinated with s1
 * Return: NULL if fail, else pointer to malloc memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len_s1;
	unsigned int count1;
	unsigned int count2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len_s1 = 0; *(s1 + len_s1) != '\0'; len_s1++)
	{
		;
	}
	ptr = malloc((len_s1 + n) * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	for (count1 = 0, count2 = 0; count1 < (len_s1 + n); count1++)
	{
		if (count1 < len_s1)
			ptr[count1] = s1[count1];
		else
			ptr[count1] = s2[count2++];
	}
	ptr[count1] = '\0';

	return (ptr);
}
