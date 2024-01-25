#include "lists.h"

/**
 * free_dlistint- function frees a list
 * @head: poter to head
 * Return:
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temporary;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((temporary = head) != NULL)
	{
		head = head->next;
		free(temporary);
	}
}
