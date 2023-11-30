#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Function prints name
 *@name: persons name
 * @f: Variable holds string
 *
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
	return;
f(name);
}
