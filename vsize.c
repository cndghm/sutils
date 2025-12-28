#include <stdio.h>
#include <math.h>

int
main() {
	double pi = acos(-1.0);
	double e = exp(1.0);
	
	printf("\nData Types:\n");
	printf("Char: %lu\n", sizeof(char)*8);
	printf("Int: %lu\n", sizeof(int)*8);
	printf("Long Int: %lu\n", sizeof(long int)*8);
	printf("Long Long Int: %lu\n", sizeof(long long int)*8);
	printf("Float: %lu\n", sizeof(float)*8);
	printf("Double: %lu\n\n", sizeof(double)*8);

	printf("Math Constants:\n");
	printf("Pi: %.50f...\n", pi);
	printf("Actual Pi: 3.14159265358979323846264338327950288419716939937510...\n");
	printf("Euler: %.50f...\n", e);
	printf("Actual Euler: 2.71828182845904523536028747135266249775724709369995...\n\n");

	return 0;
}
