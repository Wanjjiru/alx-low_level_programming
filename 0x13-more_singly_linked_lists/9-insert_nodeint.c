#include "lists.h"
/**
 * insert_nodeint_at_index - puts new node to linked list,
 * in a stated point
 * @head: ptr to 1st node
 * @idx: index where its placed
 * @n: data to add
 *
 * Return: ptr to new node, NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int e;
	listint_t *new;
	listint_t *tempo = *head;

	new = malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (e = 0; tempo && e < idx; e++)
	{
		if (e == idx - 1)
		{
			new->next = tempo->next;
			tempo->next = new;
			return (new);
		}
		else
			tempo = tempo->next;
	}
	return (NULL);
}
