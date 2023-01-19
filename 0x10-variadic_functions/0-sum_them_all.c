#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum
 * of all its parameters
 * @n: integer
 * Return: the sum of parameters or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i,
	    sum = 0;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(ap, int);
	va_end(ap);

	return (sum);
}
