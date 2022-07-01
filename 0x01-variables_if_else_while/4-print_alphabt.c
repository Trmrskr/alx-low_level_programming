#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 if success
 */

int main(void)
{
	char alphabet = 'a';
	while (alphabet <= 'z'){
		if (!(alphabet == 'q' || alphabet == 'e'))
		{
			putchar(alphabet);
		}
		alphabet = alphabet + 1;
	}
	return (0);

}
