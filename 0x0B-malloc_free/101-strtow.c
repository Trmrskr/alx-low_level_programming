#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * word_space_alloc - a function which allocates space according to
 * amount of words in a string
 * @str: string from which to get word
 * Return: 0 on success, 1 otherwise
 */
char **word_space_alloc(char *str)
{
	int word = 0, i = 0, word_count = 0;
	char **new_str;

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

	if (word_count)
		new_str = (char **)malloc(sizeof(char *) * word_count + 1);
	else
		new_str = NULL;

	return (new_str);
}

/**
 * char_space_alloc - A function which allocates character spaces to
 * a word pointer
 * @str: string which contains word from which to allocate character spaces
 * @new_str: string to which to allocate releveant spaces
 * Return: 0 on success, 1 otherwise
 */

char **char_space_alloc(char *str, char **new_str)
{

	int i = 0, word = 0, word_count = -1, char_count = 0;

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
		if (word == 1 && (str[i] == ' '|| str[i + 1] == '\0'))
		{
			word = 0;
			new_str[word_count] = (char *)malloc(sizeof(char) * char_count);

			if (new_str[word_count] == NULL)
			{
				for (i = word_count; i >= 0; i--)
					free(new_str[word_count]);
				free(new_str);
				return (NULL);
			}

			char_count = 0;
		}
		i++;
	}
	return (new_str);
}

/**
 * assign_values - assign values to array
 * @str: string from which to get values
 * @new_str: double pointer to string to which to assign values
 * Return: a double pointer to a new string
 */

char **assign_values(char *str, char **new_str)
{
	int i = 0, word = 0, word_count = -1, char_count = 0;

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

/**
 * strtow - a function that splits a string into words
 * @str: the string to be splited
 * Return: a double pointer of splitted strings
 */

char **strtow(char *str)
{
	char **new_str = NULL;
	int len = strlen(str);

	if (str == NULL || len < 1)
		return (NULL);

	new_str = word_space_alloc(str);

	if (new_str == NULL)
		return (NULL);

	new_str = char_space_alloc(str, new_str);

	if (new_str == NULL)
		return (NULL);

	new_str = assign_values(str, new_str);

	return (new_str);
}
