#include "lists.h"

/**
 * sum_listint -Returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: the head of the listint_t linked list
 * Return: intger sum of head->n
 * Description - if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	/*Traversing until tmp is null to find sum of all n*/
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
