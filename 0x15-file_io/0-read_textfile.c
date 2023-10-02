#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file to read
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print; 0 if the file
 * can not be opened or read, if filename is NULL,
 * or if write fails or does not
 * write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_count, write_count;
	char *buffer;

	/* Return 0 if filename is NULL */
	if (!filename)
		return (0);

	/* Open the file */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0); /* Return 0 if the file can not be opened or read */

	/* Allocate memory for buffer */
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	/* Read from the file */
	read_count = read(fd, buffer, letters);
	if (read_count == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* Write to POSIX standard output */
	write_count = write(STDOUT_FILENO, buffer, read_count);
	if (write_count == -1 || write_count != read_count)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (write_count);
}
