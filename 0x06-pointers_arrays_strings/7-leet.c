#include <stdio.h>
/**
 * leet - replacing special characters
 * @str: the string in which to replace characters
 * Return: str
 */

char *leet(char *str)
{
	int indexL, indexS = 0;
	char letters[] = {'o', 'l', '*', 'e', 'a', '*', '*', 't'};

	while (str[indexS] != '\0')
	{
		indexL = 0;
		while (letters[indexL] != '\0')
		{
			if (str[indexS] == letters[indexL] || str[indexS] == letters[indexL] - ' ')
			{
				str[indexS] = indexL + '0';
			}
			indexL++;
		}
		indexS++;
	}
	return (str);
}
