#include "main.h"

/**
 * _strncat - function to concatenate two strings
 * @dest: destination string
 * @src: source string
 * @n: bytes to be used from source string
 * Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = _strlen(dest), i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[len++] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
