#include "main.h"
/**
 * is_palindrome - check if a string is a palindrome
 * @s: pointer to string
 * Return: 1 if palindrome,else  0
 * Description : iteration is not allowed
 */

int is_palindrome(char *s)
{
	int len_string;

	len_string = find_len(s) - 1;

	return (if_palindrom(s, --len_string));
}

/**
 * find_len - get length of the string to be checked
 * if it is palindrom
 * @s: pointer to string
 * Return: return len of string
 */

int find_len(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + find_len(++s));
}

/**
 * if_palindrom - recursive check of palindrome
 * @s: pointer to string
 * @length: length of string
 * Return: 1 if palindrome, else 0
 */

int if_palindrom(char *s, int length)
{
	if (*s == *(s + length))
	{
		if (length <= 0)
			return (1);
		else
			return (if_palindrom(++s, length - 2));
	}
	return (0);
}
