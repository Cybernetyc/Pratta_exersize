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
    unsigned int un = 3000000000;
    short end = 65535;
    long big = 65537;
    long long verybig = 123455678908642;

    printf("\n\nun = %u, но не %d\n", un, un);
    printf("end = %hd и %d\n", end, end);
    printf("big = %ld, но не %ld\n", big, big);
    printf("verybig = %lld, но не %lld\n\n", verybig, verybig);

    return 0;
}