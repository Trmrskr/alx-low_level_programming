#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - print strings
 * @separator: separators to be placed in between strings
 * @n: the number of parameters passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		printf("%s", (str == NULL ? "(nil)" : str));

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}

