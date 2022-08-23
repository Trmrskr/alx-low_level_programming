#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void rd_wr_op(int, char *, int, char *);
void file_close(int);

/**
 * main - Entry point of program
 * @argc: the count of arguments passed to the program
 * @argv: an array containing arguments passed to the program
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd1, fd2;
	char *file_from, *file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
file_from);
		exit(98);
	}
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
file_to);
		exit(99);
	}

	rd_wr_op(fd1, file_from, fd2, file_to);
	file_close(fd1);
	file_close(fd2);

	return (0);
}

/**
 * rd_wr_op - a function that reads 1024 bytes from file1 and write to file2
 * @fd1: the file descriptor of file 1
 * @file_from: file 1, the file to read from
 * @fd2: the file descriptor of file 2
 * @file_to: file 2, the file to read to
 */

void rd_wr_op(int fd1, char *file_from, int fd2, char *file_to)
{
	ssize_t r, w;
	char buff[1024];

	do {
		r = read(fd1, buff, 1024);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
file_from);
			exit(98);
		}

		w = write(fd2, buff, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
file_to);
			exit(99);
		}
	} while (r >= 1024);
}

/**
 * file_close - a function that closes a file
 * @fd: the file descriptor of the file to close
 */

void file_close(int fd)
{
	ssize_t c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
