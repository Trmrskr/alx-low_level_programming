#include <unistd.h>
/**
 * _putchar - print character
 * @c: character to be printed
 * Return: 0 on success
 */

void _putchar(char c)
{
	write(1, &c, 1);
}
