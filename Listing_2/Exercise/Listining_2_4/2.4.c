/**
 * @file 2.4.c
 * @author your name (you@domain.com)
 * @brief Функицональный вывод всякого через printf
 * @version 0.1
 * @date 2022-07-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

void jolly (void);
void deny (void);

int main (void)
{
    printf("\n");
    jolly ();
    jolly ();
    jolly ();
    deny ();
    printf("\n");    
    return 0;
}

void jolly (void)
{
    printf("He's a fun guy!\n");
}

void deny (void)
{
    printf("Nobody can deny it!\n");
}