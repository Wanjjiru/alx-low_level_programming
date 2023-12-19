#include "main.h"

/**
 * create_file - creates file
 * @filename: The name of the file
 * @text_content: what to write in file
 *
 * Return: 1 if successful. -1 if otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fdes;
	int mail;
	int lite;

	if (!filename)
		return (-1);

	fdes = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fdes == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (mail = 0; text_content[mail]; mail++)
		;

	lite = write(fdes, text_content, mail);

	if (lite == -1)
		return (-1);

	close(fdes);

	return (1);
}
