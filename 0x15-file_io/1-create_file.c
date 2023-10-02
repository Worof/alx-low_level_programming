#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a file and writes a string to it.
 * @filename: The name of the file to create.
 * @text_content: A NULL terminated string to write to the file.
 *
 * Return: 1 if file was created, or -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	while (text_content[len])
		len++;

	w = write(fd, text_content, len);
	close(fd);

	return (w == -1 ? -1 : 1);
}
