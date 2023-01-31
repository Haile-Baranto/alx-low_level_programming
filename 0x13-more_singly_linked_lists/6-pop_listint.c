#include "lists.h"

/**
 * pop_listint -  Deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: double pointer.
 * Return: deleted node data(i.e n) if list is NULL return 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int n;

	if (tmp == NULL)
		return (0);
	*head = tmp->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
