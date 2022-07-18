#include <stddef.h>

/**
 * _strchr - A function that locates a chaacter in a string
 * @s: string from which character is to be located
 * @c: character to find
 * Return: pointer to s
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
	{
		return (0);
	}
	return (NULL);
}
