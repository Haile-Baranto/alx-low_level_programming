#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a linked dlistint_t list.
 * @h: a pointer to the head of the dlistint_t
 * Return: Number of elements in a list
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t size;

	size = 0;
	if (ptr == NULL)
		return (0);
	while (ptr != NULL)
	{
		size += 1;
		ptr = ptr->next;
	}
	return (size);
}
