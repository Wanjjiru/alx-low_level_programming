#include "lists.h"

/**
 * delete_dnodeint_at_index- Deletes anode at a given index
 * @head: pointer to node
 * @index: index to be deleted
 * Return: 1 if sucessful, 0 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int x;
	dlistint_t *ptr_i;
	dlistint_t *ptr_j;

	ptr_i = *head;

	if (ptr_i != NULL)
		while (ptr_i->prev != NULL)
			ptr_i = ptr_i->prev;
	x = 0;

	while (ptr_i != NULL)
	{
		if (x == index)
		{
			if (x == 0)
			{
				*head = ptr_i->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				ptr_j->next = ptr_i->next;

				if (ptr_i->next != NULL)
					ptr_i->next->prev = ptr_j;
			}
			free(ptr_i);
			return (1);
		}
		ptr_j = ptr_i;
		ptr_i = ptr_i->next;
		x++;
	}
	return (-1);
}
