#include "lists.h"
/**
 * add_nodeint_end - inserts node in the end of a linked list
 * @head: ptr to first element
 * @n: value to add in new element
 *
 * Return: ptr to new node, NULL if not successful
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tempo = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tempo->next)
		tempo = tempo->next;
	tempo->next = new;
	return (new);
}
