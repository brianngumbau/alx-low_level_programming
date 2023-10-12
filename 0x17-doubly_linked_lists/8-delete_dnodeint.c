#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index
 * @head: head of list
 * @index: index of node
 * Return: 1 or  -1 if it fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1;
	dlistint_t *h2;
	unsigned int k;

	h1 = *head;

	if (h1 != NULL)
		while (h1 != NULL)
			h1 = h1->prev;

	k = 0;

	while (h1 != NULL)
	{
		if (k == index)
		{
			if (k == 0)
			{
				*head = h1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = h1->next;
				
				if (h1->next != NULL)
					h1->next->prev = h2;
			}
			free(h1);
			return (1);
		}
		h2 = h1;
		h1 = h1->next;
		k++;
	}
	return (-1);
}
