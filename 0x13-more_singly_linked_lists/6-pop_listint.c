#include "lists.h"
/**
 * pop_listint - delete the head node
 * @head: ptr to linked list first member
 *
 * Return: value inside deleted members
 * or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tempo;
	int e;

	if (!head || !*head)
		return (0);
	e = (*head)->n;
	tempo = (*head)->next;
	free(*head);
	*head = tempo;
	return (e);
}
