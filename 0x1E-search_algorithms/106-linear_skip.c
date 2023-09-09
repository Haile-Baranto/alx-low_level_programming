#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: A pointer to the head of the skip list.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the list is NULL, return NULL.
 *         Otherwise, return a pointer to the node where the value is located.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *go;

	if (list == NULL)
		return (NULL);

	go = list;

	while (go->express && go->n < value)
	{
		list = go;
		go = go->express;
		printf("Value checked at index [%d] = [%d]\n", (int)go->index, go->n);
	}

	if (go->express == NULL)
	{
		list = go;
		while (go->next)
			go = go->next;
	}

	printf("Value found between indexes [%d] and [%d]\n", (int)list->index,
		(int)go->index);

	while (list != go->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
