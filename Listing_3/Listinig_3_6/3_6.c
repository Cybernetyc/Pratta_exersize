/**
 * @file 3_6.c
 * @author your name (you@domain.com)
 * @brief Переносимые имена для цельночисленных типов
 * @version 0.1
 * @date 2022-07-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <inttypes.h>

int main (void)
{
    int32_t me32;   //Переменная me32 -- 32 битная переменная со знаком
    me32 = 45933945;
    printf("\n\nСначала предположим что int32_t является int:\n");
    printf("me32 = %d\n", me32);
    printf("Далее не будем делать никаких предположений.\n");
    printf("Вместо этого воспользуемся \"Макросом\" из файла inttypes.h\n");
    printf("me32 = %"PRId32"\n\n", me32);

    return 0;
}