#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - searches a string
 * @s: input
 * @accept: input
 * Return: pointer to byte in s that matches one of thr bytes
 * NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
				return (s + x);
		}
	}
	return (NULL);
}
