#include "main.h"

/**
 * _strlen_recursion - return length of string applying recursion
 * @s: string which length is to be returned
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return 1 + _strlen_recursion(++s);
}
