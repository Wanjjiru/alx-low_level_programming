#include "lists.h"
/**
 * free_listint_safe - free linked list
 * @h: points to 1st node
 *
 * Return: totals members freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int tofauti;
	listint_t *tempo;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		tofauti = *h - (*h)->next;
		if (tofauti > 0)
		{
			tempo = (*h)->next;
			free(*h);
			*h = tempo;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;
	return (length);
}
