#include "main.h"

/**
 * create_file - create a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write
 * to file
 *
 * Return: 1 (success) or -1 (failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		write_count = write(fd, text_content, strlen(text_content));

	if (write_count == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);

}
