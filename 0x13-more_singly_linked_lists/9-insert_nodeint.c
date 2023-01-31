#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to listint_t linked list
 * @idx:  is the index of the list where the new node should be added.
 * @n: The value to be added
 * Return: the address of the new node, or NULL if it failed
 * Description: Index starts at 0 and if it is not possible to add the
 * new node at index idx, do not add the new node and return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *new_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	tmp = *head;
	for (i = 1; tmp && i < idx; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	/*Assinging memory location for the new node to be inserted*/
	new_node = malloc(sizeof(listint_t));
	/*Check whether malloc assigns memory space to new_node*/
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		*head = new_node;
		new_node->next = tmp;
	}
	else if (tmp->next)
	{
		new_node->next = tmp->next;
		tmp->next = new_node;
	}
	else
	{
		new_node->next = NULL;
		tmp->next = new_node;
	}
	return (new_node);
}
