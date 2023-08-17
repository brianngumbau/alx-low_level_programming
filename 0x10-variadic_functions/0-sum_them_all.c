#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameter passed
 * @...: variable number of parameters to calculate the sum
 * Return: sum of all parameters or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int t, sum = 0;

	va_start(ap, n);

	for (t = 0; t < n; t++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
