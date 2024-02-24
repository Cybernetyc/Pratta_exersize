/**
 * @file 3_5.c
 * @author your name (you@domain.com)
 * @brief Отображение кодового значения символа
 * @version 0.1
 * @date 2022-07-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main (void)
{   
    char symb;
    printf("\n\nВведите символ \n");
    scanf("%c", &symb);
    printf("\nКод символа %c = %x   \n\n", symb, symb);

    return 0;
}