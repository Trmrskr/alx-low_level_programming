#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: length of argument
 * @av: double pointer referencing arguments
 * Return: NULL on failure and a new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, cum_len, total_len = 0;
	char *new_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		total_len += strlen(av[i]) + 1;

	/* 1 For NUll Byte*/
	total_len += 1;

	new_str = (char *)malloc(sizeof(char) * total_len);

	if (new_str == NULL)
		return (NULL);

	cum_len = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			new_str[cum_len + j] = av[i][j];
		}

		new_str[cum_len + j] = '\n';
		cum_len += (j + 1);
	}

	return (new_str);
}
