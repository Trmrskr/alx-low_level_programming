int _strlen(char *);

/**
 * _strncpy - function to copies a strings
 * @dest: destination string
 * @src: source string
 * @n: bytes to be used from source string
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
