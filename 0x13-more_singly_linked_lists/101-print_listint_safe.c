#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Print a `listint_t` linked list including mem addresses
 * @head: head of linked list
 * Description: Go through the list only once.
 * Return: number of nodes in list. If fails, exit with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *traverse;
	size_t i;
	const listint_t *tmp;

	traverse = head;
	if (traverse == NULL)
		exit(98);

	i = 0;
	while (traverse != NULL)
	{
		tmp = traverse;
		traverse = traverse->next;
		i++;
		printf("[%p] %d\n", (void *)tmp, tmp->n);

		if (tmp < traverse)
		{
			printf("-> [%p] %d\n", (void *)traverse, traverse->n);
			break;
		}
	}

	return (i);
}
