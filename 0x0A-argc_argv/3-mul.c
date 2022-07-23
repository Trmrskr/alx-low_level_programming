#include <stdio.h>

int _atoi(char *);

/**
 * main - Entry point
 * @argc: number of main argument
 * @argv: array vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int num_1, num_2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num_1 = _atoi(argv[1]);
	num_2 = _atoi(argv[2]);

	printf("%d\n", num_1 * num_2);

	return (0);
}

int _atoi(char *s)
{
	int sum = 0, i = 0, sign = 1;

	if (s[0] == '-')
	{
		sign *= -1;
		i = 1;
	}

	while (s[i])
	{
		int value = s[i] - '0';

		sum = (sum * 10) + value;
		i++;
	}

	return (sum * sign);
}
