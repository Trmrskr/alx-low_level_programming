#include <stdarg.h>
#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

void _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

typedef struct operation{
	char op;
	void (*print_variable)(va_list arg);
} opt;

void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTION_H */
