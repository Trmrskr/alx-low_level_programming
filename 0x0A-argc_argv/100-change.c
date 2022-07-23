#include <stdio.h>

int _atoi(char *s);
/**
 * main - Program entry point
 * @argc: count of arguments
 * @argv: arguments passed to program
 * Return: (0) on exit
 */

int main(int argc, char *argv[])
{
	int denominations[] = {25, 10, 5, 2, 1};
	int count = 0, i = 0, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}

	change = _atoi(argv[1]);

	while (denominations[i] && change >  0)
	{
		if (change >= denominations[i])
		{
			count += change / denominations[i];
			change = change % denominations[i];
		}
		i++;
	}

	printf("%d\n", count);
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
