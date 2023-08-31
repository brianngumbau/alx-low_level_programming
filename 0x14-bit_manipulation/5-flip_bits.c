#include "main.h"

/**
 * flip_bits - counts the number of bits to flip to get
 * from one number to another
 * @n: first number
 * @m:second number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;
	unsigned long int c;
	unsigned long int y = n ^ m;

	for (x = 63; x >= 0; x++)
	{
		c = y >> x;
		if (c & 1)
			count++;
	}

	return (count);
}
