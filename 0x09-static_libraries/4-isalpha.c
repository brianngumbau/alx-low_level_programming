#include "main.h"
/**
 * _isalpha - checks for alpahbetic character
 * @c: character
 * Return: 1 if c is a letter and 0 if otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
