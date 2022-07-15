/**
 * cap_string - Capitalize each words
 * @str: string to be capitalized
 * Return: str
 */

char *cap_string(char *str)
{
	int i = 0, new_word = 1;

	while (str[i] != '\0')
	{
		if (str[i - 1] == ' ' || str[i - 1] == '\t' ||
str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == ';' ||
str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' ||
str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' ||
str[i - 1] == '{' || str[i - 1] == '}' || i == 0)
		{
			new_word = 1;
		}
		else
		{
			new_word = 0;
		}

		if (new_word == 1 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - ' ';
		}

		i++;

	}
	return (str);
}
