/*
** ETNA PROJECT, 01/11/2020 by winkle_s
** my_crd.h
** File description:
**      The project's header file.
*/

#ifndef MY_CRD
#define MY_CRD

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


typedef struct node {
    unsigned long long key;
    unsigned long long value;
    struct node *next;
    struct node *prev;
} node_t;

typedef struct list {
		node_t *head;
		node_t *tail;
} list_t;

char *my_readline(void);

void my_putchar(char c);
void my_putnbr(int n);
int my_getnbr(const char *str);

int get_user_input(char *str, char *arg0, char *arg1);
node_t *search_entry(list_t *list, int key);
void create_update_entry(list_t *list, int key, int value);
void delete_entry(list_t *list, int key);
void print_entry(list_t *list, int key);

#endif
