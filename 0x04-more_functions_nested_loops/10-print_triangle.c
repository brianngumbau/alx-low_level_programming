#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: empty
 */

void print_triangle(int size)
{
	int k, l, m;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 0; k < size; k++)
		{
			for (l = size - k; l > 1; l++)
			{
				_putchar(32);
			}
			for (m = 0; m <= k; m++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
