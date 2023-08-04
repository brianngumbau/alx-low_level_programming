#include "main.h"
/**
 * _strncat - concatenates 2 strings
 * using at most n bytes from src
 * @dest: ijnput value
 * @src: inpurt value
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int y;
	int z;

	y = 0;
	while (dest[y] != '\0')
	{
		y++;
	}
	z = 0;
	while (z < n && src[z] != '\0')
	{
		dest[y] = src[z];
		y++;
		z++;
	}
	dest[y]= '\0';
	return (dest);
}
