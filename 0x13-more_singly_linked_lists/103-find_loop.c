#include "lists.h"
#include <stdio.h>
/**
 * find_listint_loop - find the loop in a linked list
 * @head: head of linked list
 * Description: Not allowed to use malloc, free or arrays.
 * Can only declare a max of 2 variables.
 * Return: Address of node where loop starts, or NULL if no loop found.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp, *tmp_forward;

	if (head == NULL)
		return (NULL);

	tmp = tmp_forward = head;
	do {
		if (tmp->next)
			tmp = tmp->next;
		else
			return (NULL);

		if (tmp_forward->next->next)
			tmp_forward = tmp_forward->next->next;
		else
			return (NULL);
	} while (tmp_forward != tmp);

	tmp = head;
	while (tmp_forward != tmp)
	{
		tmp_forward = tmp_forward->next;
		tmp = tmp->next;
	}

	return (tmp);
}
