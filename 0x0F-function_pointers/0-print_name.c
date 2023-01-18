#include "function_pointers.h"

/**
 * print_name -  a function prints the name
 * @name: string to be printed
 * @f: the function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
