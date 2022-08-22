#include <unistd.h>

/**
 * _putchar - function to write character to standard output
 * @c: character to be written to standard output
 */

void _putchar(char c)
{
	write(1, &c, 1);
}
