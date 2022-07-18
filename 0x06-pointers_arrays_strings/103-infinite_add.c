int _strlen(char *);

/**
 * infinite_add - function to add string
 * @n1: string 1
 * @n2: string 2
 * @r: pointer to the result
 * @size_r: size of buffer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int nlen_1 = _strlen(n1);
	int nlen_2 = _strlen(n2);
	int exp_res_len = 0, carry_over = 0, i = 0, n1n2_diff, digit;

	if (nlen_1 >= nlen_2)
	{
		if (nlen_1 == nlen_2)
		{
			int addend_1 = n1[0] - '0';
			int addend_2 = n2[0] - '0';
			n1n2_diff = addend_1 + addend_2;

			if (n1n2_diff > 10)
				exp_res_len = nlen_1 + 1;
		}
		else
		{
			exp_res_len = nlen_1;
		}
	}
	else
	{
		exp_res_len = nlen_2;
	}

	if (size_r < exp_res_len)
	{
		return 0;
	}

	for (i = exp_res_len - 1; i >= 0; i--)
	{
		if (nlen_1 < 0 && nlen_2 >= 0)
			n1n2_diff = (n2[nlen_2] - '0') + carry_over;
		else if (nlen_1 >= 0 && nlen_2 < 0)
			n1n2_diff = (n1[nlen_1] - '0') + carry_over;
		else if (nlen_1 < 0 && nlen_2 < 0)
			n1n2_diff = carry_over;
		else if (nlen_2 >= 0 && nlen_2 >= 0)
			n1n2_diff = (n1[nlen_1] - '0') + (n2[nlen_2] - '0') + carry_over;

		digit = n1n2_diff % 10;
		carry_over = n1n2_diff / 10;
		r[i] = digit + '0';

		nlen_1--;
		nlen_2--;
	}	

	return (r);	
}

/**
 * _strlen - function returns length of string
 * @s: String whose length is to be calculated
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
