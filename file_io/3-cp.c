#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * error_exit - Prints an error message and exits the program.
 * @code: The exit code to return.
 * @msg: The error message to print.
 * @file: The file involved in the error (if applicable).
 */

void error_exit(int code, const char *msg, const char *file)
{
	if (file)
		dprintf(2, msg, file);
	else
		dprintf(2, msg);
	exit(code);
}
/**
 * main - Copies the content of one file to another.
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 *
 * Return: 0 on success, or exits with a specific error code on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", NULL);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to %s\n", argv[2]);

	while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd %d\n", fd_from);
	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd %d\n", fd_to);
	return (0);
}
