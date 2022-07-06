#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 if successful
 */

int main(void)
{
	int i = 3, sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		
		}
		i++;
	}

	printf("%d", sum);
	return (0);
}
