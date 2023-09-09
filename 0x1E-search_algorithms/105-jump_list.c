#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list
 *             using jump search.
 *
 * @list: A pointer to the head of the sorted singly linked list.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the list is NULL, return NULL.
 *         Otherwise, return a pointer to the first node where the
 *         value is found.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, prev_index, i;
	listint_t *current;

	/* Check for empty list or NULL list */
	if (!list || size == 0)
		return (NULL);
	/* Calculate the jump step */
	step = sqrt(size);
	current = list;
	/* Jump until we find a range containing the value */
	while (current->n < value)
	{
		prev_index = current->index;
		for (i = 0; i < step && current->next; i++)
			current = current->next;

		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

		/* Break if we're in the same range or value is found */
		if (current->index == prev_index || current->n >= value)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
		prev_index, current->index);

	/* Linear search within the identified range */
	while (prev_index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev_index, current->n);

		if (current->n == value)
			return (current);

		current = current->next;
		prev_index++;
	}

	/* Value not found in the list */
	return (NULL);
}
