#include "lists.h"

/**
 * free_listint2 - free a `list_t` list
 * @head: head of linked list
 * Description: The function sets head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = (*head);

	/**
	 * Check if the linked list is there is nothing
	 * to free so simply return.
	 */
	if ((*head) == NULL)
		return;
	while ((*head) != NULL)
	{
		tmp = (*head);
		(*head) = (*head)->next;
		free(tmp);
	}
	(*head) = NULL;
}
