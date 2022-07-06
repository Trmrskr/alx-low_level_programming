#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 if success
 */

int main(void)
{
	int num_1 = 1, num_2 = 2, nxt = 0, sum = num_2;

	while (nxt <= 4000000)
	{
		nxt = num_1 + num_2;
		num_1 = num_2;
		num_2 = nxt;

		if (nxt % 2 == 0)
			sum += nxt;
	}
	printf("%i\n", sum);

	return (0);
}
