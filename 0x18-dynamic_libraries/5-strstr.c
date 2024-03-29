#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: the main string sto be searched
 * @needle: the string to search for
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int h_len = _strlen(haystack);
	int n_len = _strlen(needle);

	int i = 0, j, k;

	if (!*needle)
		return (haystack);

	while ((h_len - i >= n_len) && *haystack && *needle)
	{
		if (*(haystack + i) == *needle)
		{
			int w_found = 1;

			j = 0, k = i;
			while (j < n_len)
			{
				if (*(haystack + k) != *(needle + j))
				{
					w_found = 0;
					break;
				}
				j++;
				k++;
			}

			if (w_found)
				return (haystack + i);
		}

		i++;
	}
	return (0);
}
