#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to head of list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
