/**
 * _isupper - the function returns 1 if arguement is
 * upper case and 0 otherwise
 * @c: is a parameter that is used to pass the charachter
 * to be checked
 * Return: int 0 or 1 depending on the condition
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

