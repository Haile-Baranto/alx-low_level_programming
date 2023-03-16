#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: - pointer to the head of dlistint_t
 * Return: the size of the linked list
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t size;

	size = 0;
	if (ptr == NULL)
		return (0);
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		size += 1;
		ptr = ptr->next;
	}
	return (size);
}
