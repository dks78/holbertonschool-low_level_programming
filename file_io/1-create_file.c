#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>

/**
 * create_file - Creates a file with specific content
 * @filename: The name of the file to be created
 * @text_content: The content to write into the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fd, write_status;
ssize_t len = 0;

    /* Check if filename is NULL */
if (filename == NULL)
{
    return (-1);
}

    /* Open the file with write permissions, create if not exists, truncate if exists */
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
{
return (-1);
}

    /* If text_content is not NULL, write it to the file */
if (text_content != NULL)
{
len = strlen(text_content);
write_status = write(fd, text_content, len);
if (write_status == -1)
{
        close(fd);
            return (-1); /* Return -1 if write fails */
        }
    }

    /* Close the file */
    close(fd);

    return (1); /* Return 1 on success */
}
