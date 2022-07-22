#include <stdio.h>
int _strlen(char *);
int expected_res_len(int, int, int, int);

/**
 * infinite_add - function to add string
 * @n1: string 1
 * @n2: string 2
 * @r: pointer to the result
 * @size_r: size of buffer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int nlen_1 = _strlen(n1) - 1;
	int nlen_2 = _strlen(n2) - 1;
	int exp_res_len, carry_over = 0, i, digit, n1n2_diff;

	exp_res_len = expected_res_len(nlen_1, nlen_2, *n1, *n2);

	if (size_r < exp_res_len)
	{
		return (0);
	}

	for (i = exp_res_len - 1; i >= 0; i--)
	{
		int num1 = n1[nlen_1] - '0';
		int num2 = n2[nlen_2] - '0';

		if (nlen_1 < 0 && nlen_2 >= 0)
			n1n2_diff = num2 + carry_over;
		else if (nlen_1 >= 0 && nlen_2 < 0)
			n1n2_diff = num1 + carry_over;
		else if (nlen_1 < 0 && nlen_2 < 0)
			n1n2_diff = carry_over;
		else if (nlen_1 >= 0 && nlen_2 >= 0)
			n1n2_diff = num1 + num2 + carry_over;

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

/**
 * exp_res_len_f - a function to return the expected length of result
 * @nlen_1: length of first string
 * @nlen_2: length of second string
 * Return: expected length of buffer
 */

int expected_res_len(int nlen_1, int nlen_2, int n1, int n2)
{
	int exp_res_len, n1n2_diff;
	
	if (nlen_1 >= nlen_2)
	{
		if (nlen_1 == nlen_2)
		{
			int addend_1 = n1 - '0';
			int addend_2 = n2 - '0';
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

	return (exp_res_len);
}



