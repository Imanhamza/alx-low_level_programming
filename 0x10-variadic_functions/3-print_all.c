#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
/**
 * print_all - a function that prints anything.
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *separator = "";
	func_print funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		/**
		 * 4 equals to the number of funcs present
		 * so if j is less than four and our current
		 * format is not equal to format in funcs
		 * then j becomes j + 1
		 */
		while (j < 4 && (format[i] != *(funcs[j].item)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].get_func(ap);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(ap);
}

/**
 * print_char - print char
 * @arg: arguments
 * Return: Nothing
 */
void print_char(va_list arg)
{
	char c = va_arg(arg, int);
	printf("%c", c);
}

/**
 * print_int - print an integer
 * @arg: arguments
 * Return: Nothing
 */
void print_int(va_list arg)
{
	int i = va_arg(arg, int);
	printf("%d", i);
}

/**
 * print_float - print a float
 * @arg: Arguments
 * Return: Nothing
 */

void print_float(va_list arg)
{
	float f = va_arg(arg, double);
	printf("%f", f);
}

/**
 * print_string - prints a ctring
 * @arg: arguments
 * Return: Nothing
 */
void print_string(va_list arg)
{
	char *s = va_arg(arg, char *);
	s != NULL ? printf("%s", s) : printf("(nil)");
}
