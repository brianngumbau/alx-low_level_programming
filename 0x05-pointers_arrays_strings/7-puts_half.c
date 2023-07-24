#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: the string to print
 * Return: empty
 */
void puts_half(char *str)
{
	int l = 0;
	int m;

	while (str[l] != '\0')
	{
		l++;
	}
	if (l % 2 == 0)
	{
		m = (l - 1) / 2;
		m += 1;
	}
	else
	{
		m = l / 2;
	}

	for (; m < l; m++)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
