#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: Name of file to create
 * @text_content: NULL terminated string
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len_str;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}

	/* Get the length of text_content */
	for (len_str = 0; text_content[len_str] != '\0'; len_str++)
		;

	/* Create file if DNE and apply permissions S_IRUSR | S_IWUSR */
	/* else open in O_WRONLY | O_TRUNC modes */
	o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	/* Write text_content to file */
	w = write(o, text_content, len_str);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
