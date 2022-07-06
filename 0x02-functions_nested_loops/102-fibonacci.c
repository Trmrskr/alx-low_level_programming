#include <stdio.h>

/**
 * main = Entry point
 *
 * Return: 0 if success
 */

int main(void)
{
	long int num_1 = 1, num_2 = 2, i = 0, nxt;

	printf("%ld, %ld, ", num_1, num_2);

	while (i < 48)
	{
		nxt = num_1 + num_2;
		num_1 = num_2;
		num_2 = nxt;

		printf("%ld", nxt);
		if (i != 47)
		{
			printf(", ");
		}
		i++;
	}
			
	putchar('\n');

	return (0);
}
