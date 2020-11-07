/*
** ETNA PROJECT, 04/11/2020 by winkle_s
** create_update_entry.c
** File description:
**      create entry if key doesn't exist, updates it if it exists
*/

#include "my_crd.h"

node_t *search_insertion_point(list_t *list, int key)
{
	node_t *node = list->head;

	while (node->key < key) {
		node = node->next;
	}
	return(node);
}

void update_value(node_t **node, int value)
{
	(*node)->value = value;
}

void create_update_entry(list_t *list, int key, int value)
{
    node_t *node = NULL;

    if (list->head == NULL && list->tail == NULL) {
        node = malloc(sizeof(node_t));
        list->head = node;
        list->tail = node;
        node->next = NULL;
        node->prev = NULL;
        node->key = key;
        node->value = value;
    } else {
        node = search_entry(list, key);
        if (node == NULL) {
            if (key < list->head->key) {
                node = malloc(sizeof(node_t));
                node->key = key;
                node->value = value;
                node->prev = NULL;
                node->next = list->head;
                list->head->prev = node;
                list->head = node;
					
            } else if (key > list->tail->key) {
                node = malloc(sizeof(node_t));
                node->key = key;
                node->value = value;
                node->prev = list->tail;
                node->next = NULL;
                list->tail->next = node;
                list->tail = node;
            } else {
                node = malloc(sizeof(node_t));
                node->key = key;
                node->value = value;
                node_t *first_sup_key = NULL;
                first_sup_key = search_insertion_point(list, key);
                first_sup_key->prev->next = node;
                node->prev = first_sup_key->prev;
                first_sup_key->prev = node;
                node->next = first_sup_key;
            }
        } else {
            update_value(&node, value);
        }
    }
    my_putnbr(key);
    my_putchar('\n');
}
