/**
 * _memcpy - copy memory from one buffer to another
 * @dest: destination buffer
 * @src: source buffer
 * @n: number of byte to copy from source buffer
 * Return: destination buffer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = src[i];
		i++;
	}
	return (dest);
}
