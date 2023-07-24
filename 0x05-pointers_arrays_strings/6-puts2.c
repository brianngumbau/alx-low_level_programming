#include "main.h"
/**
 * puts2 - prints one character out of two
 * @str: inpput
 * Return: characters
 */
void puts2(char *str)
{
	int longi = 0;
	int x = 0;
	char *c = str;
	int e;

	while (*c != '\0')
	{
		c++;
		longi++;
	}
	x = longi - 1;
	for (e = 0; e <= x; e++)
	{
		if (e % 2 == 0)
		{
			_putchar(str[e]);
		}
	}
	_putchar('\n');
}
