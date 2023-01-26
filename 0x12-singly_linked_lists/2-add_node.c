#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the head of the lsit_t list
 * @str: pointer to the string to be assigned
 * Return: the address of the new element, or NULL if it failed
 * Description: You are allowed to use strdup
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *first_node;
	int count;

	for (count = 0; str[count] != '\0'; count++)
		;
	first_node = malloc(sizeof(list_t));
	if (first_node == NULL)
	{
		free(first_node);
		return (NULL);
	}
	first_node->str = strdup(str);
	if (first_node->str == NULL)
	{
		free(first_node);
		return (NULL);
	}
	first_node->len = count;
	first_node->next = *head;

	*head = first_node;
	return (*head);
}
