#include "main.h"
/**
 * _isupper - check for uppercase letters
 * @c: char to check
 *
 * Return: 1 if uppercase otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
