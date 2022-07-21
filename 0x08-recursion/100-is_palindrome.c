int palinity(char *, int, int);
int _strlen(char *);
/**
 * is_palindrome - test a string if it is palindrome
 * @s: string to be tested
 * Return: 1 if true, 0 otherwise
 */

int is_palindrome(char *s)
{
	int i = 0;
	int len = _strlen(s) - 1;

	if (len <= 1)
		return (1);

	return (palinity(s, i, len));
}

/**
 * palinity - test string further if it is palindrome
 * @s: string to be tested further
 * @i: current position of element from start
 * @len: current position of element from end
 * Return: 1 if s is palindrome, 0 otherwise
 */

int palinity(char *s, int i, int len)
{
	int mid = (i + len) / 2;

	if (i > mid)
		return (1);

	if (*(s + i) != *(s + len))
		return (0);

	return (palinity(s, ++i, --len));
}

/**
 * _strlen - returns the length of the string
 * @s: string whose length is be returned
 * Return: length of the string s
 */

int _strlen(char *s)
{
	if (!*s)
		return (0);

	return (1 + _strlen(++s));
}
