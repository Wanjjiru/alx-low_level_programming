#include "lists.h"
/**
 * add_dnodeint_end- Adds node at the end of list
 * @head: pointer to head
 * @n: element value
 * Return: address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *created;

	created = malloc(sizeof(dlistint_t));
	if (created == NULL)
		return (NULL);
	created->n = n;
	created->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = created;
	}
	else
	{
		*head = created;
	}
	created->prev = h;
	return (created);
}
