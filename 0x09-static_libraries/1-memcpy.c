#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination memory
 * @src: initial memory location
 * @n: bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int l = n;

	for (; k < l; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}
