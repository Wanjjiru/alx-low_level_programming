# include "lists.h"

/**
 * add_dnodeint- Function adds a node at beginning
 * of list
 * @head: pointer to head
 * @n: node
 * Return: address of new element, Null if failde
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *created;
	dlistint_t *h;

	created = malloc(sizeof(dlistint_t));
	if (created == NULL)
		return (NULL);
	created->n = n;
	created->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	created->next = h;
	if (h != NULL)
		h->prev = created;
	*head = created;
	return (created);
}
