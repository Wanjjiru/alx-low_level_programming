#ifndef _LIST_H_
#define _LIST_H_

#include <stdio.h
#include <stdlib.h>
#include <string.h>
/**
 * struct list_s - linked list
 * *str: string
 * l: length of string
 * @next: pointer to the other string
 */

size_t prnt_list(const list_h *h);

typedef struct list_a
{
	char *s;
	size_t l;
	struct list_g *next;
	list_t;
void free_list(list_t *head);
list_t *add_node_end(list_t **head, const char *str);
list_t *add_node(list_t **head, const char *str);
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);
#endif
