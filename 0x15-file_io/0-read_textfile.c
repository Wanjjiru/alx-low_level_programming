#include "main.h"

/**
 * read_textfile - views file text
 * @filename: file title
 * @letters: no. of letter printed.
 *
 * Return: Total numbers, (0)If fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lead, rite;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	lead = read(fd, buffer, letters);
	rite = write(STDOUT_FILENO, buffer, lead);

	close(fd);

	free(buffer);

	return (rite);
}
