#include <stdio.h>
#include <limits.h>
#include <float.h>

int main (void)
{
	int a = 1;

	printf("\n\n-------------------------Integer------------------------------------\n\n");
	short i = SHRT_MAX;
	i = i + a;
	printf("\nПереполненное SHRT_MAX + 1  = %d + %d = %d\n\n", SHRT_MAX, a, i);

	i = SHRT_MIN;
	i = i - a;
	printf("\n\nПереполненное SHRT_MIN - 1 = %d - %d = %d\n\n", SHRT_MIN, a, i);


	/*
	
	printf("Short Minimal value = %d, byte(s) = %ld\n", SHRT_MIN, sizeof(SHRT_MIN));
	printf("Short Maximal value = %d, byte(s) = %ld\n", SHRT_MAX, sizeof(SHRT_MAX));
	printf("Unsignet Short Maximal value = %u, byte(s) = %ld\n", USHRT_MAX, sizeof(USHRT_MAX));
	printf("Integer Minimal value = %d, byte(s) = %ld\n", INT_MIN, sizeof(INT_MIN));
	printf("Integer Maximal value = %d, byte(s) = %ld\n", INT_MAX, sizeof(INT_MIN));
	printf("Unsignet Integer Maximal  = %u, bytes(s) = %ld\n", UINT_MAX, sizeof(UINT_MAX));
	printf("Long Integer Minimal = %ld, bytes(s) = %ld\n", LONG_MIN, sizeof(LONG_MIN));
	printf("Long Integer Maximal = %ld, bytes(s) = %ld\n", LONG_MAX, sizeof(LONG_MAX));
	printf("Unsignet Long Integer = %lu, bytes(s) = %ld\n", ULONG_MAX, sizeof(ULONG_MAX));
	printf("Long Long Integer Minimal = %lld, bytes(s) = %ld\n", LLONG_MIN, sizeof(LLONG_MIN));
	printf("Long Integer Maximal = %lld, bytes(s) = %ld\n", LLONG_MAX, sizeof(LLONG_MAX));
	printf("Unsignet Long Integer = %llu, bytes(s) = %ld\n", ULLONG_MAX, sizeof(ULLONG_MAX));
	printf("\n-----------------------------------------------------------------------\n\n");
	*/

	/*
	printf("----------------------------Float---------------------------------------\n\n");
	printf("Float Minimal = %e, byte(s) = %ld\n", FLT_MIN, sizeof(FLT_MIN));
	printf("Float Maximum = %e, byte(s) = %ld\n", FLT_MAX, sizeof(FLT_MAX));
	printf("Double Minimal = %e, byte(s) = %ld\n", DBL_MIN, sizeof(DBL_MAX));
	printf("Double Maximum = %e, bytes(s) = %ld\n", DBL_MAX, sizeof(DBL_MAX));
	printf("Long Double Minimal = %Le, bytes(s) = %ld\n", LDBL_MIN, sizeof(LDBL_MIN));
	printf("Long Double Maximal = %Le/, byete(sd) = %ld\n", LDBL_MAX, sizeof(LDBL_MAX));
	printf("\n-----------------------------------------------------------------------\n\n");
	*/

	return 0;
}
