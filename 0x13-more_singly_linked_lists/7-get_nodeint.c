#include "lists.h"
/**
 * get_nodeint_at_index - places node at a given index
 * @head: first node
 * @index: node to output
 *
 * Return: ptr to node index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int f = 0;
	listint_t *tempo = head;

	while (tempo && f < index)
	{
		tempo = tempo->next;
		f++;
	}
	return (tempo ? tempo : NULL);
}
