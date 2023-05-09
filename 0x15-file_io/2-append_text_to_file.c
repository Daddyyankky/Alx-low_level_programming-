#include "main.h"

/**
 * append_text_to_file - Append text at end of the file.
 * @filename: point to name of file.
 * @text_content: strings to be added at the end of file.
 *
 * Return: if functions fail or filename to be NULL - - 1.
 *     if file doesnt exist, the user lack write permissions - - 1.
 *     otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
