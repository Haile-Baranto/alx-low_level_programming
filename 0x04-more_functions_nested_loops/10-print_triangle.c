#include "main.h"

/**
 * print_triangle - print right angle triangle
 * @size: the size of the triangle to be printed
 * Description: use only _putchar function and for size <= print \n
 */


void print_triangle(int size)
{
	char count1;
	char count2;
	char hash;
	char temp;

	count1 = size;
	temp = size;
	if (size > 0)
	{
		for (count1 = size; count1 > 0; count1--)
		{
			count2 = size;
			size -= 1;
			hash = temp - size;
			while (count2 > 1)
			{
				_putchar(' ');
				count2 -= 1;
			}
			while (hash >= 1)
			{
				_putchar('#');
				hash -= 1;
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
