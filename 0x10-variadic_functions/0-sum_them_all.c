#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int results = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		results += va_arg(args, unsigned int);
	va_end(args);

	return (results);
}
