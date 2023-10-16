#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: character
 * @s: string
 * Return: pointer to 1st occurrence of c
 * NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
		if (s[k] == c)
			return (s + k);
	}
	return (NULL);
}
