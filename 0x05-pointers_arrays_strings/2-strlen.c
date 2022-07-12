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
