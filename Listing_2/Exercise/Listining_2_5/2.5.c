/**
 * @file 2.5.c
 * @author your name (you@domain.com)
 * @brief функциональный вывод №2
 * @version 0.1
 * @date 2022-07-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

void br (void);
void ic (void);

int main (void)
{
    printf("\n\n");
    br ();
    printf(", ");
    ic ();
    printf("\n");
    ic ();
    printf(",\n");
    br();
    printf("\n\n");

    return 0;
}

void br (void)
{
    printf("Brasil, Russia");
}

void ic (void)
{
    printf("Indian, China");
}