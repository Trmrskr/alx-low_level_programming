#include <stdio.h>

int set_end(int, int);
void print_ten_hex(char *, int, int);
void print_char(char *, int, int);

/**
 * print_buffer - a function tat prints a buffer
 * @b: buffer to be printed
 * @size: the size of content to be printed from the buffer
 */

void print_buffer(char *b, int size)
{
	int i;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		print_ten_hex(b, i, size);
		print_char(b, i, size);
	}
}

/**
 * print_ten_hex - print 10 hexadecimal equivalent of characters
 * in a string at a time
 * @b: buffer whose characters are to be printed
 * @i: start of buffer
 * @size: size of buffer to print
 */

void print_ten_hex(char *b, int i, int size)
{
	int end = i + 9;

	while (i <= end)
	{
		if (i < size)
			printf("%02x", *(b + i));
		else
			printf("  ");

		if (i % 2 != 0)
			putchar(' ');

		i++;
	}
}

/**
 * print_char - print 10 characters in the buffer at a time
 * @b: string whose char is to be printed
 * @i: first index of buffer
 * @size: last index of buffer
 */

void print_char(char *b, int i, int size)
{
	int end = i + 9;
	while (i < end)
	{
		if (i >= size)
			break;

		if (b[i] >= 0 && b[i] <= 31)
			putchar('.');
		else
			putchar(b[i]);

		i++;
	}
	putchar('\n');
}
