#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int k = 0, f = 0;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);

	f = nmemb * size;
	c = malloc(f);

	if (c == NULL)
		return (NULL);

	while (k < f)
	{
		c[k] = 0;
		k++;
	}
	return (c);
}
