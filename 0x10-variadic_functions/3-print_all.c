#include <stddef.h>
#include <string.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - print character
 * @arg: argument
 */

void print_char(va_list arg)
{
	putchar(va_arg(arg, int));
}

/**
 * print_int - print integer
 * @arg: - argument
 */

void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - print float
 * @arg: - argument
 */

void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_str - print string
 * @arg: argument
 */

void print_str(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - print all argument
 * @format: the string containing formats
 */

void print_all(const char * const format, ...)
{
	int len, i, j, cnt_print = 0;
	opt op_feat[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
	};
	va_list args;

	len = format != NULL ? strlen(format) : 0;

	va_start(args, format);
	i = 0;

	while (i < len)
	{
		j = 0;
		while (op_feat[j].op)
		{
			if (op_feat[j].op == format[i])
			{
				printf("%s", cnt_print != 0 ? ", " : "");
				op_feat[j].print_variable(args);
				cnt_print++;
				break;
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	va_end(args);
}
