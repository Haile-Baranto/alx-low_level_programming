#include "lists.h"

/**
 * free_list - free a `list_t` list
 * @head: head of linked list
 */
void free_list(list_t *head)
{
	list_t *temp;
	list_t *next;

	temp = head;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp->str);
		free(temp);
		temp = next;
	}
}
