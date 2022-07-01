#include <stdio.h>

/**
 * main - Entry point of program
 * Return: 0 if successful
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet = alphabet + 1;
	}
	putchar('\n');
	return (0);
}
