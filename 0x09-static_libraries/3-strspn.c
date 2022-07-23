/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: string whose prefix to get length of
 * @accept: the second string to test with
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int c_found = 1;

	while (*s != '\0' && c_found)
	{
		int i = 0;

		while (accept[i])
		{
			c_found = 0;
			if (*s == accept[i])
			{
				c_found = 1;
				count++;
				break;
			}
			i++;
		}
		s++;
	}
	return (count);
}
