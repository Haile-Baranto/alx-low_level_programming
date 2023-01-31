#include "lists.h"
#include <string.h>
/**
 * add_nodeint - adds a new node at the beginning of a list_t list.
 * @head: The address of the head
 * @n: An integer element of the listint_t structure
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = (*head);

	(*head) = new_node;
	return (*head);
}
