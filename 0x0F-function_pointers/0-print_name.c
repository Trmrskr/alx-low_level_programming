#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - print name of string using the function pointer
 * @name: string to be printed
 * @f: a function pointer which actually prints the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(*f)(name);
}
