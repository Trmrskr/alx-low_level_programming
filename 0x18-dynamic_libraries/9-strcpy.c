#include "main.h"

/**
 * _strcpy - copies exact copy of a string
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, len = _strlen(src);

	while (i <= len)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
