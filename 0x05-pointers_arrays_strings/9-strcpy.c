int _strlen(char *);
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


/**
 * _strlen - returns the length of a string
 * @s: string which length is to be returned
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != 0)
	{
		len++;
		s++;
	}
	return (len);
}
