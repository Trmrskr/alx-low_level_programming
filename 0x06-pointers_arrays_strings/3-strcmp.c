/**
 * _strcmp - function to compare two strings
 * @s1: first string
 * @s2: second string
 * Return: the difference between the 2 last characters indexed
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && (s1[i] == s2[i]))
		i++;

	return (s1[i] - s2[i]);
}
