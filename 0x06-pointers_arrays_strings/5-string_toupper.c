/**
 * string_toupper - convert string letters to upper case
 * @s: string whose letter is to be conveted
 * Return: Converted String.
 */

char *string_toupper(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ' ';
		}
		i++;
	}
	return (str);
}
