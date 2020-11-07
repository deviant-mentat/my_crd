/*
** ETNA PROJECT, 05/11/2020 by winkle_s
** delete_entry.c
** File description:
**      delete the given node by key
*/

#include "my_crd.h"

void delete_entry(list_t *list, int key)
{
	node_t *node = NULL;

	node = search_entry(list, key);
	if (node == NULL) {
		my_putnbr(-1);
		my_putchar('\n');
	} else if (node == list->head && node == list->tail) {
		list->head = NULL;
		list->tail = NULL;
		my_putnbr(key);
		my_putchar('\n');
		free(node);
	} else if (node == list->head) {
		list->head = node->next;
		node->next->prev = NULL;
		free(node);
		my_putnbr(key);
		my_putchar('\n');
	} else if (node == list->tail) {
		list->tail = node->prev;
		node->prev->next = NULL;
		free(node);
		my_putnbr(key);
		my_putchar('\n');
	} else if (node != NULL){
		node->prev->next = node->next;
		node->next->prev = node->prev;
		free(node);
		my_putnbr(key);
		my_putchar('\n');
	}
}
