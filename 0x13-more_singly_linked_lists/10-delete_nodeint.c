#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index of a `listint_t` list
 * @head: A pointer  to head of linked list
 * @index: index of node to delete, starting at 0
 * Return: 1 if success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delete_node;
	listint_t *tmp;
	unsigned int count = 0;

	delete_node = *head;
	if (*head == NULL)
		return (-1);

	while (count < index)
	{
		count++;
		tmp = delete_node;
		if (delete_node->next)
			delete_node = delete_node->next;
		else
			return (-1);
	}

	if (index == 0)
		*head = delete_node->next;
	else if (delete_node->next)
		tmp->next = delete_node->next;
	else
		tmp->next = NULL;

	free(delete_node);
	return (1);
}
