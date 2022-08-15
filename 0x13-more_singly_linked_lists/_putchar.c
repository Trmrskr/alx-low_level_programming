#include <unistd.h>

/**
 * _putchar - prints character to standard output
 * @c: character to printed to standard output
 */

void _putchar(char c)
{
	write(1, &c, 1);
}
