#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a string
 * @str: string to duplicate
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *s;
	int x, y = 0;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;
	
	s = malloc(sizeof(char) * (x + 1));

	if (s == NULL)
		return (NULL);
	
	for (y = 0; str[y]; y++)
		s[y] = str[y];
	return (s);
}
