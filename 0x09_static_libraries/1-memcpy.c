/**
 * _memcpy - copy memory
 * @dest: destination
 * @src: source
 * @n: length
 * Return: string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	*dest = *(src + n);
	return (dest);
}
