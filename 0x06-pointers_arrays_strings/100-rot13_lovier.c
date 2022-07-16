/**
 * rot13 - function that encodes a string in rot13
 * @str: string to be encoded
 * Return: encoded string
 */

char *rot13(char *str)
{
	char upper_case[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
'Y', 'Z'};
	char lower_case[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
'y', 'z'};
	int i = 0, j;
	int alpha_size = sizeof(upper_case) / sizeof(char);

	while (str[i] != '\0')
	{
		j = 0;
		while (j < alpha_size)
		{
			if (str[i] == upper_case[j])
			{
				str[i] = upper_case[(j + 13) % alpha_size];
				break;
			}
			else if (str[i] == lower_case[j])
			{
				str[i] = lower_case[(j + 13) % alpha_size];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
