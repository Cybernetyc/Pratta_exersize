 #include <stdio.h>
#include <limits.h>
int main (void)
{	
	char a[8] = "Char_MAX";
	printf("\n\n%s = %d\n", a,
        SCHAR_MAX);
	printf("Size of SCHAR_MAX = %ld bytes\n\n", sizeof(SCHAR_MAX));
	return 0;
}
