/*
** ETNA PROJECT, 23/10/2020 by winkle_s
** my_getnbr.c
** File description:
**      Write a function that parses a number from a string representation taken as parameter and returns it.
*/

int my_getnbr(const char *str)
{
    int i = 0;
    unsigned long long n = 0;

    if ( str[i] != '\0' ) {
        while ( '0' <= str[i] && str[i] <= '9' ) {
            n =  n * 10 + ( str[i] - '0' ) ;
            ++i;
        }
    }
    return ( (int)n );
}
