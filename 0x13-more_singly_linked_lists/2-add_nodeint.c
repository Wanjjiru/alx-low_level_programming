#include "lists.h"
/**
 * add_nodeint - adds a new node at the start of a nod
 * @head: ptr to the first node
 * @n: data to add
 *
 * Return: ptr to new node, or NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
