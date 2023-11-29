#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout
 * @filename: Name of text file
 * @letters: The number of letters to read and print
 * Return: Number of printed characters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rc, wc;
	char *buff;

	if (filename == NULL)
		return (0);

	/* Allocate memory for buff dynamically */
	buff = (char *)malloc(letters + 1);
	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	rc = read(fd, buff, letters);
	buff[rc] = '\0'; /* Nul-terminate buff */
	wc = write(STDOUT_FILENO, buff, rc);

	if (fd == -1 || rc == -1 || wc == -1 || wc != rc)
	{
		free(buff);
		return (0);
	}

	free(buff);

	/* Cleanup: Close the file */
	close(fd);

	return (wc);
}
