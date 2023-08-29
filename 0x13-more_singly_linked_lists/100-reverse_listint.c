#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - reverses a listint linked list
 * @head: pointer to head
 * Return: a pointer to the first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *newtemp;

	if (head == NULL || *head == NULL)
		return (NULL);
	temp = *head;
	*head = temp->next;
	temp->next = NULL;

	while (*head != NULL)
	{
		newtemp = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		if (newtemp == NULL)
			return (*head);
		*head = newtemp;
	}
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	return (NULL);
}
