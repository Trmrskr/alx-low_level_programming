/**
 * _strlen - length of string
 * @s: string
 * Return: string length
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
