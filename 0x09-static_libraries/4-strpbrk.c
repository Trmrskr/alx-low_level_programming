/**
 * _strpbrk - strp brek
 * @s: string
 * @accept: accept
 * Return: unsigned int
 */

unsigned int _strpbrk(char *s, char *accept)
{
	if (*s == *accept)
		return (1);
	return (0);
}
