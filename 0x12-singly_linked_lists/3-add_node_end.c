#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - add a new node at the end of `list_t` list
 * @head: double pointer to head
 * @str: string to duplicate into new node
 * Return: Address of the new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *last_node;
	int count;

	temp = *head;
	if (temp)
	{
		while (temp && temp->next != NULL)
		{temp = temp->next;
		}
	}

	for (count = 0; str[count] != '\0'; count++)
		;

	last_node = malloc(sizeof(list_t));
	if (last_node == NULL)
	{
		free(last_node);
		return (NULL);
	}
	last_node->str = strdup(str);
	if (last_node->str == NULL)
	{
		free(last_node);
		return (NULL);
	}
	last_node->len = count;
	last_node->next = NULL;

	if (temp)
		temp->next = last_node;
	else
		*head = last_node;
	return (last_node);
}
