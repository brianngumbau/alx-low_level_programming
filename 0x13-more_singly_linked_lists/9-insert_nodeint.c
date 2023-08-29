#include "lists.h"
#include <stdio.h>
/**
 * create_new - creates a new node
 * @n: data of the node
 * Return: pointer to node
 */
listint_t *create_new(int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	return (new);
}

/**
 * insert_nodeint_at_index - inserts a new node at a given index
 * @head: pointer to first element
 * @idx: index of the list where new node should be added
 * @n: data of new node created
 * Return: address of newly created node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int y;
	listint_t *temp;
	listint_t *temp_old;
	listint_t *new;

	temp = *head;
	if (head == NULL)
		return (NULL);
	new = create_new(n);
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	if (idx == 0)
		*head = new;
	for (y = 0; y < idx - 1 && temp != NULL && idx != 0; y++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	if (idx == 0)
		new->next = temp;
	else
	{
		temp_old = temp->next;
		temp->next = new;
		new->next = temp_old;
	}
	return (new);
}
