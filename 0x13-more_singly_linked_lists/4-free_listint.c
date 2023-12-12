#include "lists.h"
/**
 * free_listint - function free linked list
 * @head: list to free
 */
void free_listint(listint_t *head)
{
	listint_t *tempo;

	while (head)
	{
		tempo = head->next;
		free(head);
		head = tempo;
	}
}
