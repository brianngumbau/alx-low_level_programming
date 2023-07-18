#include "main.h"
/**
 * times_table - prints 9 times table
 * Return: empty
 */
void times_table(void)

{
	int a, b, x, y, z;

	for (a = 0; a <= 9; a++)
	{
	for (b = 0; b <= 9; b++)
	{
	x = a * b;
	if (x > 9)
	{
	y = x % 10;
	z = (x - y) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(z + '0');
	_putchar(y + '0');
	}
	else
	{
		if (b != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(x + '0');
	}
	}
	_putchar('\n');
	}
}
