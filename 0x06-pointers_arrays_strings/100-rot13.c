/**
 * rot13 - function that encodes a string in rot13
 * @str: string to be encoded
 * Return: encoded string
 */

char *rot13(char *str)
{
	char alpha[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	char rot_13[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
'L', 'M', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};

	int i = 0, j;
	int alpha_size = sizeof(alpha) / sizeof(char);

	while (str[i] != '\0')
	{
		j = 0;
		while (j < alpha_size)
		{
			if (str[i] == alpha[j])
			{
				str[i] = rot_13[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
