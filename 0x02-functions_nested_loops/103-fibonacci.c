#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 if success
 */

int main(void)
{
	long int num_1 = 1, num_2 = 2, i = 2, nxt, sum = num_2;

	while (i < 4000000)
	{
		nxt = num_1 + num_2;
		num_1 = num_2;
		num_2 = nxt;

		if (nxt % 2 == 0)
		{
			sum += nxt;
		}
		i++;
	}
	printf("%ld\n", sum);

	return (0);
}
