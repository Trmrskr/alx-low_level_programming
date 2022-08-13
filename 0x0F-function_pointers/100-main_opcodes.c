#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_number(int n);

/**
 * main - Entry point of program
 * @argc: count of argument into main
 * @argv: an array of arguments into main
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	unsigned char opcode;
	int (*main_func)(int, char **) = main;
	int num_of_byte, i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_of_byte = atoi(argv[1]);

	if (num_of_byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i < num_of_byte)
	{
		opcode = *(unsigned char *)main_func;
		printf("%.2x", opcode);

		if (i != num_of_byte - 1)
			printf(" ");

		main_func++;
		i++;
	}
	printf("\n");
	return (0);
}

