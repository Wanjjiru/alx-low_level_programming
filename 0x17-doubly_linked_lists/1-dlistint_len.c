#include "lists.h"

/**
 * dlistint_len- Function returns number of
 * elements in a list
 * @h: Pointer to head
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int tally;

	tally = 0;

	if (h == NULL)
		return (tally);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		tally++;
		h = h->next;
	}
	return (tally);
}
