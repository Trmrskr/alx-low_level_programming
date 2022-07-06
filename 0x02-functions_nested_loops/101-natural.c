#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i = 3, int sum_3 = 0, int sum_5 = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d", sum);
	return (0);
}
