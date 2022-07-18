#include <unistd.h>

/**
 * _putchar - print characters to standard input
 * @c: character to be printed
 */

void _putchar(char c)
{
	write(1, &c, 1);
}
