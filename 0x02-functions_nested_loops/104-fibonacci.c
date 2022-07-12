#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 if success
 */

int main(void)
{
	int num_1 = 1, num_2 = 2, i = 2, nxt;

	printf("%d, %d, ", num_1, num_2);

	while (i < 98)
	{
		nxt = num_1 + num_2;
		num_1 = num_2;
		num_2 = nxt;

		printf("%i", nxt);
		if (i != 98)
		{
			printf(", ");
		}
		i++;
	}

	putchar('\n');

	return (0);
}
