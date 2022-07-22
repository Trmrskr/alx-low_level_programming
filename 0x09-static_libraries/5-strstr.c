/**
 * _strstr - find word
 * @haystack: string
 * @needle: word
 * Return: haystack modified
 */

char *_strstr(char *haystack, char *needle)
{
	if (*haystack == *needle)
		return (needle);
	return (haystack);
}
