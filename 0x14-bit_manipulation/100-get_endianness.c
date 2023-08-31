#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 for big endian 1 for litle endian
 */

int get_endianness(void)
{
	unsigned int n = 1;
	char *r = (char *) &n;

	return (*r);
}
