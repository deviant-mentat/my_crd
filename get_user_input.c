/*
** ETNA PROJECT, 05/11/2020 by winkle_s
** get_user_input.c
** File description:
**      gets the user input, and puts its arguments in an array
*/

#include "my_crd.h"

int is_num(char c)
{
    if ( c >= '0' && c <= '9' ) {
        return (1);
    } else {
        return (0);
    }
}

int get_user_input(char *str, char *arg0, char *arg1)
{
    int i = 0;
    int j = 0;

    if (is_num(str[0])) {
        while (str[i] != ' ' && str[i] != '\0') {
            arg0[i] = str[i];
            ++i;
        }
        arg0[i] = '\0';
        if (str[i] == '\0') {
            arg1[0] = '\0';
            return (0);
        } else if (str[i] = ' ') {
            ++i;
            if (str[i] == 'D') {
                arg1[0] = 'D';
                arg1[1] = '\0';
                return (0);
            } else {
                while(is_num(str[i])) {
                    arg1[j] = str[i];
                    ++j;
                    ++i;
                }
                arg1[j] = '\0';
            }
        }
        
    } else {
        arg0[0] = '\0';
        arg1[0] = '\0';
        return (0);
    }
}
