#include <stdio.h>

int main ( void )
{
    float sm = 0.0;
    printf("\n\nPlease, enter the sm ");
    scanf("%f", &sm);
    printf("\n\n%.2f inch in %.1f sm\n\n", sm/2.54, sm);

    return 0;
}