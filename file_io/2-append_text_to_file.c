#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>

/**
 * append_text_to_file - Appends text to a file
 * @filename: The name of the file
 * @text_content: The NULL-terminated string to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_status;
	ssize_t len = 0;

	/* Check if filename is NULL */
	if (filename == NULL)
	{
		return (-1);
	}

	/* Open the file for appending (O_WRONLY | O_APPEND) */
	fd = open(filename, O_WRONLY | O_APPEND);

	/* If file does not exist or cannot be opened, return -1 */
	if (fd == -1)
	{
		return (-1);
	}

	/* If text_content is not NULL, write it to the file */
	if (text_content != NULL)
	{
		len = strlen(text_content);  /* Calculate length of text_content */
		write_status = write(fd, text_content, len); /* Write the content */

		/* If writing fails, return -1 */
		if (write_status == -1)
		{
			close(fd);
			return (-1);
		}
	}

	/* Close the file */
	close(fd);

	return (1);  /* Return 1 on success */
}
