#include "lists.h"
/**
 * reverse_listint - reverse linked list
 * @head: ptr to 1st node
 *
 * Return: ptr to new nodes head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = old;
		old = *head;
		*head = next;
	}
	*head = old;
	return (*head);
}
