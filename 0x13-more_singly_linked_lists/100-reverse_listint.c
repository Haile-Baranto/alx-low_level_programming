#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - Reverse a `listint_t` linked list
 * @head: Address of pointer which points to  head of linked list
 * Description: Limited to going through loop only once.
 * Not allowed to use `malloc` or `free` or arrays
 * Can only declare a max of 2 variables.
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp;
	listint_t *traverse;

	if (*head == NULL)
		return (NULL);

	traverse = *head;
	*head = traverse->next;
	tmp = (*head)->next;
	traverse->next = NULL;
	if (*head == NULL)
	{
		*head = traverse;
		return (traverse);
	}

	while (tmp != NULL)
	{
		(*head)->next = traverse;
		traverse = *head;
		*head = tmp;
		tmp = (*head)->next;
	}

	(*head)->next = traverse;
	return (*head);
}
