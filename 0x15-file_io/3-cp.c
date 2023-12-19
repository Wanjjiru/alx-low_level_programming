#include "main.h"
#include <stdio.h>

/**
 * error_file - sees if it opens
 * @file_from: file to be copied
 * @file_to: file to copy to
 * @argv: arguments vector
 * Return: nothing
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int copy_from, copy_to, err;
	ssize_t chr, lite;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	copy_from = open(argv[1], O_RDONLY);
	copy_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(copy_from, copy_to, argv);

	chr = 1024;
	while (chr == 1024)
	{
		chr = read(copy_from, buff, 1024);
		if (chr == -1)
			error_file(-1, 0, argv);
		lite = write(copy_to, buff, chr);
		if (lite == -1)
			error_file(0, -1, argv);
	}

	err = close(copy_from);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", copy_from);
		exit(100);
	}

	err = close(copy_to);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", copy_from);
		exit(100);
	}
	return (0);
}
