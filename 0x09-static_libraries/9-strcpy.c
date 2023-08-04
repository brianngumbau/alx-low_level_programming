#include "main.h"
/**
 * _strcpy - copies the string copied by src
 * @dest: destination
 * @src: copy from
 * Return: string value
 */
char *_strcpy(char *dest, char *src)
{
	int g = 0;
	int h = 0;

	while (*(src + g) != '\0')
	{
		g++;
	}
	for (; h < g; h++)
	{
		dest[h] = src[h];
	}
	dest[g] = '\0';
	return (dest);
}
