#include <stdio.h>

int main(void)
{
	char s[10];

	s[5] = 'c';
	s[6] = 'a';
	s[7] = 'm';
	s[8] = 'e';
	s[9] = 'o';

	while (*s)
	{
		if (*s != '')
			break;
	}
	printf("%s\n", s);
	return (0);
}
