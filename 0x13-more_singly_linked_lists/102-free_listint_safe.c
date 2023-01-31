#include "lists.h"

/**
 * free_listint_safe - free a `listint_t` list and set the head to null
 * @h: double pointer to head of linked list
 * Description: This function should work for circular lists
 * Only loop through the list once
 * Return: size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *traverse;
	listint_t *tmp;
	size_t i = 0;

	traverse = *h;
	while (traverse != NULL)
	{
		i++;
		tmp = traverse;
		traverse = traverse->next;
		free(tmp);

		if (tmp < traverse)
			break;
	}
	*h = NULL;

	return (i);
}
