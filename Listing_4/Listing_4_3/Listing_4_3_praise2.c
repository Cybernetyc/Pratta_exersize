/* praice2.c */
// Проверить распознование реализации спецификатора %zd
// %u и %lu

#include <stdio.h>
#include <string.h> /* предоставляет прототип strlenf() */
#define PRAISE "You are great person!"

int main (void)
{
    char name[40];

    printf("Как вас зовут?\n");
    scanf("%s", name);
    printf("Здравствуйте, %s. %s\n", name, PRAISE);
    printf("Ваше имя состоит из %zd символов и занимает %zd ячеек памяти. \n",
    strlen(name), sizeof name);
    printf("Хвалебная фраза содержит %zd символов\n",
    strlen (PRAISE));
    printf("И занимает %zd ячеек памяти.\n", sizeof PRAISE);

    return 0;
}