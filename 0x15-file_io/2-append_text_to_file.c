#include "main.h"

/**
 * append_text_to_file - appends text at end of file
 * @filename: Name of file
 * @text_content: Null terminated string
 * Return: 1 on success, -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, str_len;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (str_len = 0; text_content[str_len] != '\0'; str_len++)
		;

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, str_len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
