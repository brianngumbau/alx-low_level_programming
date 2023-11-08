#include "hash_tables.h"
/**
* key_index - a function that gives the index of a key
* @key: key of hash table
* @size: size of array
* Return: index of the key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int find_the_index;

	find_the_index = hash_djb2(key);
	return (find_the_index % size);
}
