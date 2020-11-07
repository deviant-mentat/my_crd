#include "my_crd.h"

void print_entry(list_t *list, int key)
{
	node_t *node = NULL;

	node = search_entry(list, key);
	if (node != NULL) {
		my_putnbr(node->value);
		my_putchar('\n');
	} else {
		my_putnbr(-1);
		my_putchar('\n');
	}
}
