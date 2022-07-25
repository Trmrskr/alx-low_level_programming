#include <stdlib.h>

int _strlen(char *);
/**
 * _strdup - Duplicates a string and returns a pointer to the new string
 * @str: string
 * Return: Address of duplicate string
 */

char *_strdup(char *str)
{

	int len = _strlen(str), i = 0;
	char *dup_str = (char *)malloc((sizeof(char) * len) + 1);

	if (*str == NULL || str == NULL || dup_str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		dup_str[i] = str[i];
	}
	return (dup_str);
}

/**
 * _strlen - returns the length of a string
 * @s: string which length is to be returned
 * Return: integer
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
