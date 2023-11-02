#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: Size of the array.
 *
 * Return: pointer to newly created hassh table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *pointer;
	unsigned long int x;

	pointer = malloc(sizeof(hash_table_t));
	if (pointer == NULL)
		return (NULL);

	pointer->size = size;
	pointer->array = malloc(sizeof(hash_node_t *) * size);
	if (pointer->array == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		pointer->array[x] = NULL;

	return (pointer);
}
