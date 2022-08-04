#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - print numbers passed as parameters to function
 * @separator: separators of numbers
 * @n: number of parametes
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, unsigned int));

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
