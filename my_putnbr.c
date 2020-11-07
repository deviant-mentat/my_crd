/*
** ETNA PROJECT, 23/10/2020 by winkle_s
** my_putnbr.c
** File description:
**      Write a function that displays the number given as a parameter. It must be able to display all the possible values of an int.
*/

#include "my_crd.h"

void my_putnbr(int nb)
{
    int modulo = 0;

    if (nb <= 9 && nb >= 0)
        my_putchar(nb + '0');
    if (nb < 0)
        {
            my_putchar('-');
            nb = nb * (- 1);
            if (nb <= 9 && nb >=0)
                my_putnbr(nb);
        }
    if (nb > 9)
        {
            modulo = nb % 10;
            my_putnbr(nb / 10);
            my_putchar(modulo + '0');
        }
}
