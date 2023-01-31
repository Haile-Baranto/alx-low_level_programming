#include "lists.h"

/**
 * free_listint - free a `list_t` list
 * @head: head of linked list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	/**
	 * Check if the linked list is there is nothing
	 * to free so simply return.
	 */
	if (head == NULL)
		return;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
