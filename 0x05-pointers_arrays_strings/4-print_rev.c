#include "main.h"
/**
 * print_rev - prints astring in reverse
 * @s: string
 * Return:0
 */
void print_rev(char *s)
{
	int longi = 0;
	int q;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (q = longi; q > 0; q--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
