#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints element in a linked list
 * @h: poimts to list_t
 *
 * Return: total no. of nodes
 */
size_t print_list(const list_t *h)
{
	size_t p = 0;

	while (h)

	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len,
					h->str);
		h = h->next;
		p++;
	}

	return (p);
}
