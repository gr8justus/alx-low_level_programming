#include "main.h"

/**
 * read_textfile - read from file
 * @filename: pointer to file path
 * @letters: number of letters to read and print
 *
 * Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;
	int fd, read_count, write_count;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buffer = malloc(letters + 1);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	read_count = read(fd, buffer, letters);

	if (read_count == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	buffer[read_count] = '\0';
	write_count = write(STDOUT_FILENO, buffer, read_count);

	if (write_count == -1 || write_count < read_count)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (write_count);
}
