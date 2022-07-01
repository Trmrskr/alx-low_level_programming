#include <stdio.h>

/**
 * main - Entry point of program
 * Return: 0 if successful
 */

int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet = alphabet - 1;
	}
	putchar('\n');
	return (0);
}
