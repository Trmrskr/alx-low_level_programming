#include <stdio.h>

/**
 * main - Entry point of program
 * Return: 0 if successful
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet < 'z')
	{
		putchar(alphabet);
		putchar('\n');
		alphabet = alphabet + 1;
	}

	return (0);
}
