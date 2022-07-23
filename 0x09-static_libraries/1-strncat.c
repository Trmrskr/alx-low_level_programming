int _strlen(char *);

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

/**
 * _strlen - function to calculate the length of a string
 * @s: string whose length is to be calculated
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0, i = 0;

	while (s[i++])
	{
		len++;
	}

	return (len);
}
