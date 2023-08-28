#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - frees a list
 * and sets head to NULL
 * @head:npointer to the address of head of list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	head = NULL;
}
