#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to list
 * @index: index of the node starting from 0
 * Return: pointer to retrieved node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int d;

	for (d = 0; d < index; d++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
