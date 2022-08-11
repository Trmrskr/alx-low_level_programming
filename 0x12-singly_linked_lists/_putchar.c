#include <unistd.h>

/**
 * _putchar - print character
 * @c: character to be printed
 */

void _putchar(char c)
{
	write(1, &c, 1);
}
