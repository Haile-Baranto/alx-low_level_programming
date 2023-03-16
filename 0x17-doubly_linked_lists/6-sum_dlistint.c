#include "lists.h"

/**
 * sum_dlistint - Sums all the data of a dlistint_t list.
 * @head: The head of the dlistint_t list.
 *
 * Return: The sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *trav;

	trav = head;
	while (trav)
	{
		sum += trav->n;
		trav = trav->next;
	}
	return (sum);
}
