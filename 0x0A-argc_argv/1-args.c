#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of main argument
 * @argv: array vector
 * Return: 0 on success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
