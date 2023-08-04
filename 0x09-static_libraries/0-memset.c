#include "main.h"
/**
 * _memset - fills a block of value with specific value
 * @s: starting address
 * @b: desired value
 * @n: bytes
 * Return: new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
