#include "lists.h"
/**
 * sum_listint - gives sum of a linked list
 * @head: first node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tempo = head;

	while (tempo)
	{
		sum += tempo->n;
		tempo = tempo->next;

	}
	return (sum);
}
