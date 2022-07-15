#include <unistd.h>

/**
 * _putchar - prints characters
 * @c: character to  print
 */

void _putchar (char c)
{
	write(1, &c, 1);
}
