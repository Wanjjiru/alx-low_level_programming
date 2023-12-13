#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints elements of linked list
 * @h: linked list to be printed
 *
 * Return: no. of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;
	const listint_t *curnt = h;

	while (curnt)
	{
		printf("%d\n", curnt->n);
		number++;
		curnt = curnt->next;
	}
	return (number);
}
