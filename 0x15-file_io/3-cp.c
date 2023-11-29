#include "main.h"

/**
 * copy_file - Copies the content of a file to another file
 * @argv: An array of strings (commandline arguments)
 * Return: An integer
 */
int copy_file(char **argv)
{
	char buffer[BUFFSIZE];
	int fd_from, fd_to, bytesRead, bytesWritten;
	mode_t file_mode;

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, file_mode);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]), exit(99);
	}

	while ((bytesRead = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		if (bytesRead == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		bytesWritten = write(fd_to, buffer, bytesRead);
		if (bytesWritten == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(fd_from) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	}
	if (close(fd_to) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	}
	exit(EXIT_SUCCESS);
}

/**
 * main - check the code
 * @ac: Number of commandline arguments
 * @argv: An array of strings (commandline arguments)
 * Return: Always 0.
 */

int main(int ac, char **argv)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (!argv[1])
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	copy_file(argv);

	return (0);
}
