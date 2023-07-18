#include "main.h"
/**
 * _abs - prints the absolute value of an integer
 * @c: integer to be computed
 * Return:Absolute value of number or zero
 */
int _abs(int c)
{

	if (c < 0)
	{
		int val;

		val = c * -1;
		return (val);
	}
	return (c);
}
