#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout
 * @filename: Name of text file
 * @letters: The number of letters to read and print
 * Return: Number of printed characters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int read_count, write_count;
	char *buff;

	if (filename == NULL)
		return (0);

	/* Allocate memory for buff dynamically */
	buff = (char *)malloc(letters + 1);
	if (buff == NULL)
		return (0);

	/* Open file and obtain file descriptor */
	fd = open(filename, O_RDONLY);
	if (fd == -1) /* If open fails */
		return (-1);

	/* Read file contents into buff */
	read_count = read(fd, buff, letters);
	if (read_count == -1) /* If read fails */
		return (0);

	buff[read_count] = '\0'; /* Null-terminate buff */

	/* Write size read_count from  buff to stdout */
	write_count = write(STDOUT_FILENO, buff, read_count);
	if (write_count == -1 || write_count != read_count)
		return (0);

	/* Cleanup: Close the file */
	close(fd);

	free(buff);

	return (write_count);
}
