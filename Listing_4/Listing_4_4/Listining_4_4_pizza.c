/* pizza.c -- использует константы, определённые применительно к пицце */
#include <stdio.h>
#define PI 3.14159
int main()
{
	float area, circum, radius;
	printf("Каков радиус вашей пиццы?(cм)\n");
	scanf("%f", &radius);
	area =PI * radius * radius;
	circum = 2.0 * PI * radius;
	printf("Основные параметры вашей пиццы:\n");
	printf("Длина окружности = %1.2f(см)\nПлощадь = %1.2f(см^2)\n",
	circum,area);
	return 0;
}