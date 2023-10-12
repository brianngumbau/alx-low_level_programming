#include "lists.h"

/**
 * add_dnodeint - adds new node(beginning)
 * @head: head of list
 * @n: value
 * Return: address of new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *b;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	b = *head;

	if (b != NULL)
	{
		while (b->prev != NULL)
			b = b->prev;
	}

	new->next = b;

	if (b != NULL)
		b->prev = new;

	*head = new;

	return (new);
}
