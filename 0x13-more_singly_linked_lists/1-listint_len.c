#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list_t list.
 * @h: pointer to the head of the lsit_t list
 * Return: Number of elements of list_t single linked list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	size_t size = 0;

	while (temp != NULL)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}
