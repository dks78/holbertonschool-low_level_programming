#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 1024

/**
 * main - Copies content from one file to another
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, or exits with specific error codes on failure
 */
int main(int argc, char *argv[])
{
    int file_from, file_to;
    ssize_t nread, nwrite;
    char buffer[BUF_SIZE];

    /* Check the number of arguments */
    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    /* Open the file_from */
    file_from = open(argv[1], O_RDONLY);
    if (file_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    /* Open (or create) file_to and truncate it if it exists */
    file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
    if (file_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        close(file_from);
        exit(99);
    }

    /* Read from file_from and write to file_to in chunks of 1024 bytes */
    while ((nread = read(file_from, buffer, BUF_SIZE)) > 0)
    {
        nwrite = write(file_to, buffer, nread);
        if (nwrite != nread)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            close(file_from);
            close(file_to);
            exit(99);
        }
    }

    /* Check for errors while reading */
    if (nread == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        close(file_from);
        close(file_to);
        exit(98);
    }

    /* Close both files */
    if (close(file_from) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
        exit(100);
    }

    if (close(file_to) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
        exit(100);
    }

    return (0);
}
