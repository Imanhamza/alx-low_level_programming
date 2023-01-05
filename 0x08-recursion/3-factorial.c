#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: integer
 * Return: A number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (factorial(n - 1) * n);
	}
}