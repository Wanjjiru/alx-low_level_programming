# include "lists.h"

/**
 * prind_dlistint- Prints elements  of a list
 * @h: pointer to head
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int tally;

	tally = 0;

	if (h == NULL)
		return (tally);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		tally++;
		h = h->next;
	}
	return (tally);
}
