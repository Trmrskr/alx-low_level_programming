int _strlen(char *);

/**
 * rev_string - reverse a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int len = _strlen(s) - 1, i, halfLen = len / 2;
	char temp;

	for (i = 0; i <= halfLen; i++)
	{
		temp = *(s + (len - i));
		*(s + (len - i)) = *(s + i);
		*(s + i) = temp;
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
