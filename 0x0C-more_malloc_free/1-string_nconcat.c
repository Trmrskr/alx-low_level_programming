#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates s1 and n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of n2 to be concatenated
 * Return: pointer to a new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len_1 = strlen(s1), p_len, i;
	unsigned int len_2 = strlen(s2);

	if (s1 == NULL)
		len_1 = 0;
	if (s2 == NULL)
		len_2 = 0;

	if (n >= len_2)
		p_len = len_1 + len_2 + 1;
	else
		p_len = len_1 + n + 1;

	ptr = malloc(p_len);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < p_len; i++)
	{
		if (i < len_1)
		{
			ptr[i] = s1[i];
		}
		else
		{
			ptr[i] = s2[i-len_1];
		}
	}
	ptr[i] = '\0';

	return (ptr);
}
