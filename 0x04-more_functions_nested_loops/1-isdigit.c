/**
 * _isdigit -  returns 1 if arguement is  number 0-9
 * and 0 otherwise
 * @c: is a parameter that is used to pass the charachter
 * to be checked
 * Return: int 0 or 1 depending on the condition
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

