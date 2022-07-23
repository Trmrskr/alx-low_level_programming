/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string to be searched on
 * @accept: bytes to be searched
 * Return: a pointer to the byte in s that matches bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int b_found = 0, i;

	while (*s != '\0' && !b_found)
	{
		i = 0;
		while (accept[i])
		{
			if (*s == accept[i])
			{
				b_found = 1;
				break;
			}
			i++;
		}
		s++;
	}
	if (b_found)
	{
		return (s - 1);
	}
	else
	{
		return (0);
	}
}
