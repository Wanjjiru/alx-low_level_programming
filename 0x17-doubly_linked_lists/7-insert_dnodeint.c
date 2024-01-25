#include "lists.h"
/**
 * insert_dnodeint_at_index- inserts new node at a specific position
 * @h: pointer to head
 * @idx: position of new node
 * @n: value of new node
 * Return: address of new node, NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *create;
	dlistint_t *head;
	 unsigned int y;

	 create = NULL;
	 if (idx == 0)
		 create = add_dnodeint(h, n);
	 else
	 {
		 head = *h;
		 y = 1;
		 if (head != NULL)
			 while(head->prev != NULL)
				 head = head->prev;
		 while (head != NULL)
		 {
			 if (y == idx)
			 {
				 if (head->next ==NULL)
					 create = add_dnodeint_end(h, n);
				 else
				 {
					 create = malloc(sizeof(dlistint_t));
					 if (create != NULL)
					 {
						 create->n = n;
						 create->next = head->next;
						 create->prev = head;
						 head->next->prev = create;
						 head->next = create;
					 }
				 }
			 }
			 break;
		 }
		 head = head->next;
		 y++;
	 }
	 return (create);
}
