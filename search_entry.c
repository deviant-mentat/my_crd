/*
** ETNA PROJECT, 05/11/2020 by winkle_s
** search_entry.c
** File description:
**      search for a given node by key
*/

#include "my_crd.h"

node_t *search_entry(list_t *list, int key)
{
	if (list->head == NULL)
		return (NULL);
	else if ( key < list->head->key ) {
		return (NULL);
	}
	else if (key > list->tail->key) {
		return (NULL);
	} else {
		node_t *node = list->head;
		while (node->key != key) {
			node = node->next;
			if (node == NULL)
				return (NULL);
		}
		return (node);
	}
}
