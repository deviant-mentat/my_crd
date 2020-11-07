/*
** ETNA PROJECT, 05/11/2020 by winkle_s
** my_putchar.c
** File description:
**      prints the given character
*/

#include "my_crd.h"

void my_putchar(char c)
{
	write(1, &c, 1);
}
