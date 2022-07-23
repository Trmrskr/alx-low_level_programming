/**
 * _strcat - returns concatenated string.
 * @dest: destination string
 * @src: Source string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i = 0;

	while (dest[i++])
		len++;

	i = 0;

	while (src[i])
		dest[len++] = src[i++];

	return (dest);
}
