#include "main.h"

/**
 * append_text_to_file - attaches text to end of file
 * @filename: name of file
 * @text_content: text input
 *
 * Return: 1 if file present. -1 if not
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdes;
	int input;
	int lite;

	if (!filename)
		return (-1);

	fdes = open(filename, O_WRONLY | O_APPEND);

	if (fdes == -1)
		return (-1);

	if (text_content)
	{
		for (input = 0; text_content[input]; input++)
			;

		lite = write(fdes, text_content, input);

		if (lite == -1)
			return (-1);
	}

	close(fdes);

	return (1);
}
