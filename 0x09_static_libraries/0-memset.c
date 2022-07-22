/**
 * _memset - set characters to a constant
 * @s: string
 * @b: constant char
 * @n: length
 * Return: editted version of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	*(s + n) = b;
	return (s);
}
