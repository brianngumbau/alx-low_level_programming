#include "main.h"

/**
 * _isupper - check if a letter is uppercase
 * @c: character to be checked
 * Return: 1 for uppercase letter 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
