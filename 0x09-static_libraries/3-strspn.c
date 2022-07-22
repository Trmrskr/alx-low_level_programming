/**
 * _strspn - strspn
 * @s: string
 * @accept: accept
 * Return: unsigned integer
 */

unsigned int _strspn(char *s, char *accept)
{
	if (*s == *accept)
		return (1);
	return (0);
}
