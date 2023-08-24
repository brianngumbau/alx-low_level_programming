#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at beginning of a list
 * @head: original linked list
 * @str:string to add to node
 * Return: address of new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
