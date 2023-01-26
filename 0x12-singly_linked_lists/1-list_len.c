#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: poiter to the head of the lsit_t list
 * Return: Number of elements of list_t list
 */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	size_t length = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		length++;
	}
	return (length);
}
