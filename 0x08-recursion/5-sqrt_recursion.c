#include "main.h"
#include <stdio.h>

int _sqrt(int n, int k);

/**
 * _sqrt_recursion - returns the natural squareroot of a number
 * @n: number
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - calculates natural squareroot
 * @n: number to calculate
 * @k: iterate number
 * Return: natural squareroot
 */
int _sqrt(int n, int k)
{
	int sqrt = k * k;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (k);

	return (_sqrt(n, k + 1));
}
