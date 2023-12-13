#include "lists.h"
#include <stdio.h>
/**
 * loop_listint_length - gives unique  nodes total
 * @head: checked ptr to head
 * Return: If it fails (0) else total nodes
 */
size_t loop_listint_length(const listint_t *head)
{
	const listint_t *dec, *ced;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	dec = head->next;
	ced = (head->next)->next;
	while (ced)
	{
		if (dec == ced)
		{
			dec = head;
			while (dec != ced)
			{
				node++;
				dec = dec->next;
				ced = ced->next;
			}
			dec = dec->next;
			while (dec != ced)
			{
				node++;
				dec = dec->next;
			}
			return (node);
		}
		dec = dec->next;
		ced = (ced->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - safely prints a list
 * @head: listint_t heads ptr
 * Return: Total nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, i = 0;

	node = loop_listint_length(head);

	if (node == 0)
	{
		for (;head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < node; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p] %d\n", (void *)head, head->n);
	}
	return (node);
}
