#include "lists.h"
/**
 * add_dnodeint - Adds node at the begging of a dlistint_t list.
 * @head: A double pointer to dlistint_t list
 * @n: A vaue to be inserted at the beggining of dlistint_t list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
