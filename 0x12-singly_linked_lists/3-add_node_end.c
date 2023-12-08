#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds new node
 * @head: double pointer to list_t
 * @str: string to be added
 *
 * Return: address of element added, or NULL if not succcessful
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *t = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = len;
	n->next = NULL;

	if (*head == NULL)

	{
		*head = n;
		return (n);
	}

	while (t->next)
		t = t->next;

	t->next = n;

	return (n);
}
