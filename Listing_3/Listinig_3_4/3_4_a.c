/**
 * @file 3_4.c
 * @author your name (you@domain.com)
 * @brief Дополнительные свойства функции Printf
 * @version 0.1
 * @date 2022-07-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main (void)
{
    char x = 'E';
    
    printf("\n\nSize of int = %lu байт(а) \n", sizeof(int));
    printf("Переменная char должна иметь вид FATE, но имеет вид %c\n", x);
    printf("Size of char = %lu байт\n\n", sizeof(char));

    return 0;
}