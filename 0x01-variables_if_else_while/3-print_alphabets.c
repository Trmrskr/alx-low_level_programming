#include <stdio.h>

/**
 * main - Entry point of the program.
 * Return: 0 if successful.
 */

int main(void)
{
	int alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet = alphabet + 1;

	}
	alphabet = 'A';
	while (alphabet <= 'Z')
	{
		putchar(alphabet);
		alphabet = alphabet + 1;
	}
	putchar('\n');
	return (0);
}
