#include "main.h"

/**
 * print_diagonal - draws a diagonal line on terminal
 * @n: number of times to print the diagonal
 * Return: nothing
 */

void print_diagonal(int n)
{
	int v, p;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (v = 0; v < n; v++)
		{
			for (p = 0; p < v; p++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
