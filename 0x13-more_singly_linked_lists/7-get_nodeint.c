#include "lists.h"

/**
 * get_nodeint_at_index -returns the nth node of a listint_t linked list
 * @head: the head of the listint_t linked list
 * @index: Index of the node whose value to be ruturned
 * Return: nth node data else if the node does not exist, return NULL
 * Description - node indexing starts at 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	if (head == NULL)
		return (NULL);
	/*Traversing untill index == i*/
	while (tmp)
	{
		if (index == i)
			return (tmp);
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
