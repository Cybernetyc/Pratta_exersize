/**
 * @file 2.8.c
 * @author your name (you@domain.com)
 * @brief Тройная функция
 * @version 0.1
 * @date 2022-07-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/**
 * @brief 
 * подключение заголовка стандартного ввода/вывода
 */
#include <stdio.h>

/**
 * @brief Прототипы 
 * используемые в программе
 */
void one_three (void);
void two (void);
/**
 * @brief Точка входа в программу
 * функиця main
 * @return int 
 */
int main (void)
{
    /**
     * @brief Поочередёный вызов функций 
     * print и one_three, объявленных в конце программы
     */
    printf("\n\nLet's do this, shit!\n");
    one_three ();
    printf("Ohnice !\n\n");

    return 0;
}
/**
 * @brief Объявление функций one_three
 * Функиця two вызывается в функции one_three
 */
void one_three (void)
{
    printf ("One\n");
    two();
    printf ("Three\n");
}

void two (void)
{
    printf ("Two\n");
}
