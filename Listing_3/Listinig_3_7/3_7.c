/**
 * @file 3_7.c
 * @author your name (you@domain.com)
 * @brief  Отображает значение типа Float двумя способами
 * @version 0.1
 * @date 2022-07-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main (void)
{
    float aboat = 32000.0;
    double abet = 2.14e+9;
    long double dip = 5.32e-5;
    float toobing = 3.4E38;

    printf("\n\n%f может быть записан как %e\n", aboat, aboat);
    printf("И его %a в шестнадцатеричной, представляющей степение 2, форме записи\n", aboat);
    printf("%f Может быть записано как %e\n", abet, abet);
    printf("%Lf Может быть записан как %Le\n", dip, dip);
    printf("toobing в числовой форме = %f, в экпоненциальной %e\n", toobing, toobing);
    toobing = toobing * 100.0f;
    printf("toobing = %f\n\n", toobing);
        toobing =1 / toobing;
    printf("toobing = %f\n\n", toobing);


    return 0;
}