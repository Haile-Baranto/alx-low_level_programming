#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all elements of a list_t list
 * @h: poiter to the head of the lsit_t list
 * Return: the number of nodes
 * Description: if str is NULL print 0(nil) and you can use printf
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t length = 0;

	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		length++;
	}
	return (length);
}
