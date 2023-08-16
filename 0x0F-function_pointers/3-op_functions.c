#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns sum of 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns difference between 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns product of 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the division of 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns a modulus of 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
