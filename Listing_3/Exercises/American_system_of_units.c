#include <stdio.h>

int main (void)
{
	double cup =  0.0;
	printf("\n\nPlease enter the number of cup(s) ");
	scanf("%lf", &cup);
	printf("\n%.1f cup(s) contain %.1f pint\n", cup, cup/2);
	printf("\n%.1f cup(s) contain %.1f ounce\n", cup, cup*8);
	printf("\n%.1f cup(s) contain %.1f tablespiin\n", cup, cup*8*2);
	printf("\n%.1f cup(s) contain %.1f teaspoon\n\n", cup, cup*8*2*3);
	return 0;
}
