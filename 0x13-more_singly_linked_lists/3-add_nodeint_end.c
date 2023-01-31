#include "lists.h"
#include <string.h>
/**
 * add_nodeint_end - adds a new node at the beginning of a list_t list.
 * @head: The address of the head
 * @n: An integer element of the listint_t structure
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp = (*head);
	listint_t *new_node;

	/* Create New node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/* Assign members of the new node*/
	new_node->n = n;
	new_node->next = NULL;
	/* Iterate to the end node of already created listint_t list*/
	if (tmp == NULL)
	{
		(*head) = new_node;
		return (*head);
	}
	while (tmp->next != NULL && tmp)
	{
		tmp = tmp->next;
	}
	/*Assign address of the new node to the pointer member of listint_t list*/
	tmp->next = new_node;
	return (*head);
}
