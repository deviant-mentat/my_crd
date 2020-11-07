/*
** ETNA PROJECT, 01/11/2020 by winkle_s
** main.c
** File description:
**      The main function of the project.
*/

#include "my_crd.h"

void free_all(struct node *head)
{
   struct node* tmp;

   while (head != NULL)
    {
       tmp = head;
       head = head->next;
       free(tmp);
    }
}

int main(void)
{
    char arg0[100];
    char arg1[100];
    char *str;
    int key = -1;
    int value = -1;
    list_t list;
    
    list.head = NULL;
    list.tail = NULL;
    while ((str = my_readline()) != NULL) {
        get_user_input(str, arg0, arg1);
        free(str);
        if (arg0[0] != '\0' && arg1[0] == '\0') {
            key = my_getnbr(arg0);
            print_entry(&list, key);
        } else if (arg0[0] != '\0' && arg1[0] == 'D') {
            key = my_getnbr(arg0);
            delete_entry(&list, key);
        } else if (arg0[0] != '\0' && arg1[0] != '\0' ){
            key = my_getnbr(arg0);
            value = my_getnbr(arg1);
            create_update_entry(&list, key, value);
        } else if ( arg0[0] == '\0' ) {
            break;
        }
        else {
            printf("Error\n");
        }
    }
    free_all(list.head);
    return (0);
}
