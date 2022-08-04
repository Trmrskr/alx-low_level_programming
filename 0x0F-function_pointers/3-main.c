#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * main - Entry point of program
 * @argc: number of arguments
 * @argv: an array of arguments entered
 * Return: 0 if successful, 1 if not
 */

int main(int argc, char *argv[])
{
	int num_1, num_2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num_1 = atoi(argv[1]);
	op = argv[2];
	num_2 = atoi(argv[3]);

	if (!get_op_func(op))
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num_2 == 0) || (*op == '%' && num_2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num_1, num_2));

	return (0);
}
