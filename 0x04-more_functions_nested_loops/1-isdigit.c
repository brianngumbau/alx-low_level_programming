#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: number to be checked
 * Return: 1 if it is a digit 0 for anything else
 */

int _isdigit(int c)
{
	if (c >= 48 && <= 57)
	{
		return (1);
	}
	return (0);
}
