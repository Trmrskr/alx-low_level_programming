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
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		int num;

		num = _atoi(argv[i]);

		if (num == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
/**
 * _atoi - convert string to numbers
 * @s: string to be converted
 * Return: numbers
 */

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
		int value;

		if (!(s[i] >= '0' && s[i] <= '9'))
			return (-1);

		value = s[i] - '0';
		sum = (sum * 10) + value;
		i++;
	}

	return (sum * sign);
}
