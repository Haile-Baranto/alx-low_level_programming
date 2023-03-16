#include "lists.h"

/**
 * add_dnodeint_end - Adds node at the end of dlistint_t list
 * @head: A double pointer to dlistint_t
 * @n: A value to be added at the end of dlistint_t list
 * Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *trav;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	trav = *head;
	while (trav->next != NULL)
		trav = trav->next;
	trav->next = new;
	new->prev = trav;
	return (new);
}
