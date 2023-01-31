#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all elements of a list_t list
 * @h: pointer to the head of the lsit_t list
 * Return: the number of nodes
 * Description: You can use printf
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	size_t size = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		size++;
	}
	return (size);
}
