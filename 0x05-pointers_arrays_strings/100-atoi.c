#include <stdlib.h>

/**
 * _atoi - convert string to numbers
 * @s: string to be converted.
 * Return: number
 */

int _atoi(char *s)
{
	int *num;
	int count_minus = 0, num_loop = 0, count_num = 0, i = 0, j, sum = 0, cum_sum = 0;
	num = (int*)malloc(10 * sizeof(int));

	while (*s != '\0')
	{
		if (*s == '-')
		{
			count_minus += 1;
		}
		if (*s >= '0' && *s <= '9')
		{
			num_loop = 1;
			num[count_num] = *s - '0';
			count_num += 1;
		}
		if (num_loop == 1 && !(*s >= '0' && *s <= '9'))
			break;
	}

	while (i < count_num)
	{
		j = 0;
		while (j < count_num)
		{
			num[j] *= 10;
			sum = num[j];
			j++;
		}
		cum_sum += sum;
		i++;
	}

	if (count_minus % 2 != 0)
	{
		cum_sum *= -1;
	}

	return (cum_sum);
}
