#include <stdio.h>
#include <limits.h>
#include <float.h>

int main (void)
{
	printf("\n\n-------------------------Integer------------------------------------\n\n");

	short a = SHRT_MIN;
	a = a - 1;
	printf("SHRT_MIN ( Short Minimal ) value = %d, byte(s) = %ld\n", SHRT_MIN, sizeof(SHRT_MIN));
	printf("Ouside of type SHRT_MIN - 1 = %d - %d = %d\n\n", SHRT_MIN, 1, a);

	a = SHRT_MAX;
	a = a + 1;
	printf("SHRT_MAX ( Short Maximal ) value = %d, byte(s) = %ld\n", SHRT_MAX, sizeof(SHRT_MAX));
	printf("Ouside of type SHRT_MAX + 1 = %d + %d = %d\n\n", SHRT_MAX, 1, a);

	unsigned short u_a = USHRT_MAX;
	u_a = u_a + 1;
	printf("USHRT_MAX ( Unsigned Short Maximal ) value = %u, byte(s) = %ld\n", USHRT_MAX, sizeof(USHRT_MAX));
	printf("Ouside of type USHRT_MAX + 1 = %u + %d = %u\n\n", USHRT_MAX, 1, u_a);

	int i_a = INT_MIN;
	i_a = i_a - 1;
	printf("INT_MIN ( Integer Minimal ) value = %d, byte(s) = %ld\n", INT_MIN, sizeof(INT_MIN));
	printf("Ouside of type INT_MIN - 1 = %d - %d = %d\n\n", INT_MIN, 1, i_a);

	i_a = INT_MAX;
	i_a = i_a + 1;
	printf("INT_MAX ( Integer Maximal ) value = %d, byte(s) = %ld\n", INT_MAX, sizeof(INT_MIN));
	printf("Ouside of type INT_MAX + 1 = %d - %d = %d\n\n", INT_MAX, 1, i_a);

	unsigned int u_i_a = UINT_MAX;
	u_i_a = u_i_a + 1;
	printf("UINT_MAX ( Unsigned Integer Maximal ) value = %u, bytes(s) = %ld\n", UINT_MAX, sizeof(UINT_MAX));
	printf("Ouside of type UINT_MAX + 1 = %u + %d = %u\n\n", UINT_MAX, 1, u_i_a);

	long int l_i_a = LONG_MIN;
	l_i_a = l_i_a - 1;
	printf("LONG_MIN ( Long Integer Minimal ) value = %ld, bytes(s) = %ld\n", LONG_MIN, sizeof(LONG_MIN));
	printf("Ouside of type LONG_MIN - 1 = %ld - %d = %ld\n\n", LONG_MIN, 1, l_i_a);

	l_i_a = LONG_MAX;
	l_i_a = l_i_a + 1;
	printf("LONG_MAX ( Long Integer Maximal ) = %ld, bytes(s) = %ld\n", LONG_MAX, sizeof(LONG_MAX));
	printf("Ouside of type LONG_MAX + 1 = %ld + %d = %ld\n\n", LONG_MAX, 1, l_i_a);

	unsigned long int u_l_i_a = ULONG_MAX;
	u_l_i_a = u_l_i_a + 1;
	printf("ULONG_MAX (Unsigned Long Integer Maximal ) = %lu, bytes(s) = %ld\n", ULONG_MAX, sizeof(ULONG_MAX));
	printf("Ouside of type ULONG_MAX + 1 = %lu + %d = %lu\n\n", ULONG_MAX, 1, u_l_i_a);

	long long int l_l_i_a = LLONG_MIN;
	l_l_i_a = l_l_i_a - 1;
	printf("LLONG_MIN ( Long Long Integer Minimal) = %lld, bytes(s) = %ld\n", LLONG_MIN, sizeof(LLONG_MIN));
	printf("Ouside of type LLONG_MIN - 1 = %lld - %d = %lld\n\n", LLONG_MIN, 1, l_l_i_a);

	l_l_i_a = LLONG_MAX;
	l_l_i_a = l_l_i_a + 1;
	printf("LLONG_MAX ( Long Integer Maximal ) = %lld, bytes(s) = %ld\n", LLONG_MAX, sizeof(LLONG_MAX));
	printf("Ouside of type LLONG_MAX + 1 = %lld + %d = %lld\n\n", LLONG_MAX, 1, l_l_i_a);

	unsigned long long int u_l_l_i_a = ULLONG_MAX;
	u_l_l_i_a = u_l_l_i_a + 1;
	printf("ULLINT_MAX ( Unsignet Long Long Integer ) = %llu, bytes(s) = %ld\n", ULLONG_MAX, sizeof(ULLONG_MAX));
	printf("Ouside of type ULLONG_MAX + 1 = %llu + %d = %llu\n", ULLONG_MAX, 1, u_l_l_i_a);
	printf("\n-----------------------------------------------------------------------\n\n");

	printf("----------------------------Float---------------------------------------\n\n");

	float b = FLT_MIN;
	b = b - 0.1E-36;
	printf("FLT_MIN ( Float Minimal ) value = %e, byte(s) = %ld\n", FLT_MIN, sizeof(FLT_MIN));
	printf("Outside of type FLT_MIN - 0.1E-36 = %e - %e = %e\n\n", FLT_MIN, 0.1E-37, b);

	b = FLT_MAX;
	b = b + 1.0E38;
	printf("FLT_MAX ( Float Maximum ) = %e, byte(s) = %ld\n", FLT_MAX, sizeof(FLT_MAX));
	printf("Outside of type FLT_MAX + 0.1E+38 = %e + %e = %e\n\n", FLT_MAX, 1.0E38, b);

	double d_b = DBL_MIN;
	d_b = d_b - 1E-307;
	printf("DBL_MIN ( Double Minimal ) = %e, byte(s) = %ld\n", DBL_MIN, sizeof(DBL_MAX));
	printf("Outside of type DBL_MIN - 1E-308 = %e - %e = %e\n\n", DBL_MIN, -1.0E-307, d_b);

	d_b = DBL_MAX;
	d_b = d_b + 1.0E+308;
	printf("DBL_MAX ( Double Maximum ) value = %e, bytes(s) = %ld\n", DBL_MAX, sizeof(DBL_MAX));
	printf("Outside of type DBL_MAX + 1E+308 = %e + %e = %e\n", DBL_MAX, 1.0E+308, d_b);

	printf("\n-----------------------------------------------------------------------\n\n");

	return 0;
}
