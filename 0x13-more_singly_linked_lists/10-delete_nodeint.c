#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at a specific index
 * @head: ptr to 1st member
 * @index: index of node to be removed
 *
 * Return: 1 if successsful, or -1 if otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempo = *head;
	listint_t *old = NULL;
	unsigned int e = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tempo);
		return (1);
	}
	while (e < index - 1)
	{
		if (!tempo || !(tempo->next))
			return (-1);
		tempo = tempo->next;
		e++;
	}
	old = tempo->next;
	tempo->next = old->next;
	free(old);
	return (1);
}
