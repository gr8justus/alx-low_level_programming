#include "main.h"

/**
 * main - copy the contents of a file to another
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int source_fd, dest_fd;

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}

	source_fd = open_file(argv[1], O_RDONLY, 0);
	dest_fd = open_file(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);

	copy_file(source_fd, dest_fd);

	close_file(source_fd);
	close_file(dest_fd);

	return (0);
}

/**
 * print_error - prints error message
 * @msg: message string to print
 * @filename: name of the file affected
 * @exit_code: status code
 *
 * Return: nothing
 */
void print_error(const char *msg, const char *filename, int exit_code)
{
	write(STDERR_FILENO, msg, strlen(msg));
	write(STDERR_FILENO, filename, strlen(filename));
	write(STDERR_FILENO, "\n", 1);
	exit(exit_code);
}

/**
 * open_file - opens a file
 * @filename: pointer to the name of the file
 * @flags: ranges from access modes, creation and
 * status flags
 * @mode: file permissions
 *
 * Return: file descriptor number
 */
int open_file(const char *filename, int flags, mode_t mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
		print_error("Error: Can't open file ", filename, 98);

	return (fd);
}

/**
 * copy_file - copies file from source to dest
 * @source_fd: file descriptor to copy from
 * @dest_fd: file descriptor to copy to
 *
 * Return: nothing
 */
void copy_file(int source_fd, int dest_fd)
{
	char buffer[BUFFER_SIZE];
	ssize_t read_count, write_count;

	while ((read_count = read(source_fd, buffer, sizeof(buffer))) > 0)
	{
		write_count = write(dest_fd, buffer, read_count);

		if (write_count == -1)
			print_error("Error: Can't write to file ", "", 99);
	}

	if (read_count == -1)
		print_error("Error: Can't read from file ", "", 98);
}

/**
 * close_file - closes an opened file
 * @fd: file descriptor to close
 *
 * Return: nothing
 */
void close_file(int fd)
{
	if (close(fd) == -1)
		print_error("Error: Can't close file ", "", 99);
}
