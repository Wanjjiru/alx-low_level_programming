#include <unistd.h>

/**
   * _putchar - writes char c in stdout
    * @c: char to be printed
      * Return: 0
       * On error, return -1 , and errno is set appropriately.
        */
int _putchar(char c)
{
		return (write(1, &c, 1));
}

