int _strlen(char *);

/**
 * rev_string - reverse a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int len = _strlen(s) - 1, i;
	char *temps = s;

	for (i = 0; i <= len; i++)
	{
		*(s + i) = *(temps + (len - i));
	}
}

/**
 * _strlen - Returns the length of a string
 * @s: String passed as argument to the function
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
