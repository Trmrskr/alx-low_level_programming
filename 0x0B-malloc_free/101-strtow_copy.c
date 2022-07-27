#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - a function that splits a string into words
 * @str: the string to be splited
 * Return: a double pointer of splitted strings
 */

char **strtow(char *str)
{
	char **new_str;
	int len = strlen(str);
	int word = 0, i = 0, word_count = 0, char_count;

	if (str == NULL || len < 1)
		return (NULL);
/* First phase of while loop counts the amount of words in the string*/
	while (str[i])
	{
		if (word == 0 && str[i] != ' ')
		{
			word = 1;
			word_count += 1;
		}
		if (word == 1 && str[i] == ' ')
		{
			word = 0;
		}
		i++;
	}
	new_str = (char **)malloc(sizeof(char *) * word_count + 1);
	if (new_str == NULL)
		return (NULL);

	i = 0, word = 0, word_count = -1, char_count = 0;

/* Second Phase of while loop determines the character length of strings and allocate splace accordingly */
	while (str[i])
	{
		if (word == 0 && str[i] != ' ')
		{
			word = 1;
			word_count += 1;
		}
		if (word == 1 && str[i] != ' ')
		{
			char_count += 1;
		}
		if (word == 1 && str[i] == ' ')
		{
			word = 0;
			new_str[word_count] = (char *)malloc(sizeof(char) * char_count);
			if (new_str[word_count] == NULL)
				return (NULL);
			char_count = 0;
		}
		i++;
	}

	i = 0, word = 0, word_count = -1, char_count = 0;

	while (str[i])
	{
		if (word == 0 && str[i] != ' ')
		{
			word = 1;
			word_count += 1;
		}
		if (word == 1 && str[i] != ' ')
		{
			new_str[word_count][char_count] = str[i];
			char_count += 1;
		}
		if (word == 1 && str[i] == ' ')
		{
			word = 0;
			char_count = 0;
		}
		i++;
	}
	new_str[word_count + 1] = NULL;

	return (new_str);
}
