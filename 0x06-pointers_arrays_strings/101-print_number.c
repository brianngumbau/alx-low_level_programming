#include "main.h"
/**
 * print_number - prints numbers
 * @n: integer params
 * Return: 0
 */
void print_number(int n)
{
	unsigned int d1;

	d1 = n;
	if (n < 0)
	{
		_putchar('-');
		d1 = -n;
	}
	if (d1 / 10 != 0)
	{
		print_number(d1 / 10);
	}
	_putchar((d1 % 10) + '0');
}
