#include "lists.h"
/**
 * listint_len - gives no. of elements
 * @h: linked list to traverse
 *
 * Return: no. of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
