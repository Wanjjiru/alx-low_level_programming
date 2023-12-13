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
	listint_t *curnt;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		curnt = *h;
		*h = (*h)->next;
		if (curnt <= *h)
		{
			free(curnt);
		}
		else
		{
			free(curnt);
			break;
		}
	}
	*h = NULL;
	return (length);
}
