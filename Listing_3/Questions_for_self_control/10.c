#include <stdio.h>

int main (void)
{
	double cows, legs;
	cows = 0.0;
	legs = 0.0;
	printf("\n\nСколько корьвих ног вы насчитали?\n");
	scanf("%lf", &legs);
	cows = legs/4;
	printf("Отсюда следует, что есть %.1lf коров(а).\n\n", cows);
	getchar();
	return 0;
}
