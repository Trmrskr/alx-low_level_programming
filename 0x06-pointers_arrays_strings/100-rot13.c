/**
 * rot13 - function that encodes a string in rot13
 * @str: string to be encoded
 * Return: encoded string
 */

char *rot13(char *str)
{
	int i = 0, j;
	char upper_alpha[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
'Y', 'Z'};
	char lower_alpha[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
'y', 'z'};
	int alpha_size = 26;

	while (str[i] != '\0')
	{
		j = 0;
		while (j < alpha_size)
		{
			if (str[i] == lower_alpha[j])
			{
				str[i] = lower_alpha[(j + 13) % 26];
				break;
			}
			else if (str[i] == upper_alpha[j])
			{
				str[i] = upper_alpha[(j + 13) % 26];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
