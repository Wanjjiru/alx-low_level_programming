#include "main.h"
/**
 * get_endianness - Check endianness
 * Return: 0 if its big, 1 if little
 */
int get_endianness(void)
{
	int y = 1;
	int lil_bg;

	lil_bg = (int) (((char *)&y)[0]);
	return (lil_bg);
}
