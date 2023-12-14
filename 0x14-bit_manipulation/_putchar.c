#include <unistd.h>
/**
 * _putchar - outputs a char
 * @c: char to output
 * Return: 1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
