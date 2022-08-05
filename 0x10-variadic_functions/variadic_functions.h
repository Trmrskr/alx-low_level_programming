#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include <stdarg.h>

void _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct operation - struct declaration
 * @op: specifier
 * @print_variable: function to operate on specifier
 */

typedef struct operation
{
	char op;
	void (*print_variable)(va_list arg);
} opt;

void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTION_H */
