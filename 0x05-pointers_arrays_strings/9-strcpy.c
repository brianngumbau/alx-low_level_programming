#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: destination value
 * @src: source value
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int d;

	for (d = 0; src[d] != '\0'; d++)
	{
		dest[d] = src[d];
	}
	dest[d++] = '\0';
	return (0);
}
