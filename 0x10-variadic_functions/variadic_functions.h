#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print - New typedef struct
 * @item - data type
 * @get_func - a pointer to a function
 */
typedef struct print
{
	char *item;
	void (*get_func)(va_list arg);
} func_print;

#endif
