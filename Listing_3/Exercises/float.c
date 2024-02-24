/**
 * @file float.c
 * @author your name (you@domain.com)
 * @brief Упражнение по программированию 3.4 ( Вывод чисел с плавающей точкой )
 * @version 0.1
 * @date 2022-08-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main (void)
{
    float F = 0.0;
    printf("\n\n Пожалуйста введите число ");
    scanf("%f", &F);
    printf("\n\nЗапись с фиксированной запятой : %f", F);
    printf("\nЭкспоненциальная форма записи числа : %e", F);
    printf("\nДвоично экспоненициальное представление : %a\n\n", F);

    return 0;
}