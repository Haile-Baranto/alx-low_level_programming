#include "main.h"
/**
 * cap_string - capitalize all the first letter of a word
 * @str: string
 * Return: pointer to string (str)
 */

char *cap_string(char *str)
{
	int index;
	int scape;
	int temp;
	char special_symbols[] = ",;.!?(){}\n\t\" ";
	temp = 1
		;
	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[0] > 96 && str[0] < 123)
			temp = 0;
		for (scape = 0; special_symbols[scape] != '\0'; scape++)
		{
			if (special_symbols[scape] == str[index])
				temp = 0;
		}

		if (!temp)
		{
			if (str[index] > 96 && str[index] < 123)
			{
				str[index] -= 32;
				temp = 1;
			}
			else if (str[index] > 64 && str[index] < 91)
				temp = 1;
			else if (str[index] > 47 && str[index] < 58)
				temp = 0;
		}
	}
	return (str);
}
