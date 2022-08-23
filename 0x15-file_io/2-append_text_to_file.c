#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - a function that appends text to a file
 * @filename: name of file to which to append text
 * @text_content: the text to be appended to file
 * Return: 1 if successful, -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, w;
	unsigned int len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

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
