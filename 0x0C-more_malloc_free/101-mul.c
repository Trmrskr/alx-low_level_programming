#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int is_all_digit(char *);
void *_calloc(unsigned int, unsigned int);
void *multiply_strings(int *, char *, unsigned int, char *, unsigned int);
void print_result(int *, unsigned int);

/**
 * main - Entry point to program
 * @argc: argument count
 * @argv: argument to the program
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int is_num1, is_num2;
	int *res, *result;
	unsigned int len_1, len_2, exp_len;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	len_1 = strlen(argv[1]);
	len_2 = strlen(argv[2]);
	exp_len = len_1 + len_2;

	is_num1 = is_all_digit(argv[1]);
	is_num2 = is_all_digit(argv[2]);

	if (is_num1 == 1 || is_num2 == 1)
	{
		printf("Error\n");
		exit(98);
	}

	res = _calloc(exp_len, sizeof(int));

	result = multiply_strings(res, argv[1], len_1, argv[2], len_2);

	print_result(result, exp_len);

	free(result);

	return (0);
}

/**
 * _calloc - allocates memory
 * @nmemb: The number of element
 * @size: the size of byte to allocate
 * Return: pointer to new memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *alloc;
	char *buffer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	alloc = malloc(size * nmemb);

	if (alloc == NULL)
		return (NULL);

	buffer = alloc;

	for (i = 0; i < (size * nmemb); i++)
		buffer[i] = 0;

	return (alloc);
}

/**
 * multiply_strings - multiply two strings containing positive numbers
 * @res: a double pointer to the result pointer
 * @num_str1: the string representing number 1
 * @len_1: length of num_str1
 * @num_str2: the string representing number 2
 * @len_2: length of num_str2
 * Return: a void pointer to our result which is a pointer to an int
 */

void *multiply_strings(int *res, char *num_str1, unsigned int len_1,
char *num_str2, unsigned int len_2)
{
	int exp_len = (len_1 + len_2) - 1;
	int i, j, z, l1 = len_1 - 1, l2 = len_2 - 1, sum;
	int carry_over, dig_1, dig_2, prod, w_digit;

	for (i = l1; i >= 0; i--)
	{
		dig_1 = num_str1[i] - '0';

		for (j = l2; j >= 0; j--)
		{
			z = i + j + 1;
			dig_2 = num_str2[j] - '0';
			prod = dig_1 * dig_2;
			sum = prod;
			res[z] += sum;
		}
	}

	carry_over = 0;

	for (z = exp_len; z >= 0; z--)
	{
		res[z] += carry_over;
		w_digit = res[z] % 10;
		carry_over = res[z] / 10;
		res[z] = w_digit;
	}

	return (res);
}

/**
 * is_all_digit - checks if all characters in a string are digits
 * @str: string to be tested
 * Return: 0 if true, 1 otherwise
 */

int is_all_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' && *str > '9')
			return (1);
		str++;
	}
	return (0);
}

/**
 * print_result - prints all the numbers in a pointer to int as characters
 * @num_ptr: pointer to int to be printed from
 * @exp_len: the expected length of result/output
 */

void print_result(int *num_ptr, unsigned int exp_len)
{
	int num_detected = 0;
	unsigned int z;
	char xter;

	for (z = 0; z < exp_len; z++)
	{
		if (num_detected == 0 && num_ptr[z] != 0)
			num_detected = 1;
		if (num_detected == 1)
		{
			xter = num_ptr[z] + '0';
			putchar(xter);
		}
	}
	putchar('\n');
}
