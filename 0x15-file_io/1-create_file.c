#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - a function that creates a file
 * @filename: the name of file to be created.
 * @text_content: the content to write to the file.
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fd, w;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
	}

	w = write(fd, text_content, len);

	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
