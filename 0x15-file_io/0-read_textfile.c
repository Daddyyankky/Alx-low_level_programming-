#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read the text file printed to be STDOUT.
 * @filename: text file to be read
 * @letters: num of letters to read
 * Return: W- actual num of bytes to read and print
 *     0 when function fail or filename to be NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
