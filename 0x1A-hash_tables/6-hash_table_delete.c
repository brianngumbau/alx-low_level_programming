#include "hash_tables.h"
/**
* hash_table_delete - Delete the hash table
* @ht: the hash table
* Return: the hash table deleted
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *next;
	unsigned long int index;

	if (!ht)
		return;
	for (index = 0; index < ht->size; index++)
		for (temp = ht->array[index]; temp; temp = next)
		{
			next = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	free(ht->array);
	free(ht);
}
