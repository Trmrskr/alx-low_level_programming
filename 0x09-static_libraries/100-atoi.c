/**
 * _atoi - convert string to numbers
 * @s: string to be converted.
 * Return: number
 */

int _atoi(char *s)
{
	int sign = 1, num_loop = 0;
	unsigned int num = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		if (*s >= '0' && *s <= '9')
		{
			num_loop = 1;
			num = (num * 10) + (*s - '0');
		}
		if (num_loop == 1 && !(*s >= '0' && *s <= '9'))
		{
			break;
		}
		s++;
	}

	num = num * sign;

	return (num);
}
