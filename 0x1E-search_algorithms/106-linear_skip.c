#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list
 * of integers.
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 * Return: pointer on the first node where value is located
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current;

	if (list == NULL)
		return (NULL);

	current = list;

	do {
		list = current;
		current = current->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)current->index, current->n);
	} while (current->express && current->n < value);

	if (current->express == NULL)
	{
		list = current;
		while (current->next)
			current = current->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)current->index);

	while (list != current->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
