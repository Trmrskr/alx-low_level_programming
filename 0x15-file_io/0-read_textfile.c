#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - read text from a file and prints to std output
 * @filename: file to read from
 * @letters: the number of letter to be read or printed
 * Return: The  number of letters it could read or print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);

	r = read(fd, buff, letters);

	if (r == -1)
		return (0);

	w = write(STDOUT_FILENO, buff, r);

	if (w == -1 || w != r)
		return (0);

	close(fd);

	return (w);
}
