/**
 * @file ASCII_CODE.c
 * @author your name (you@domain.com)
 * @brief Упражнение по программированию 3.2 ( Пратта )
 * @version 0.1
 * @date 2022-08-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main (void)
{
    int NUMB;  
    printf("\n\nPlease enter the code of symobol ");
    scanf("%d", &NUMB);
    printf("\nASCII Symbol is = %c\n\n", NUMB);
    getchar();

    return 0;
}