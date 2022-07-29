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
	int len_1 = strlen(s1), p_len, i, j;
	int len_2 = strlen(s2), num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);

	if (num >= len_2)
		num = len_2;
	p_len = len_1 + num + 1;

	ptr = malloc((p_len + 1) * sizeof(*ptr));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j];

	ptr[i + j] = '\0';

	return (ptr);
}
